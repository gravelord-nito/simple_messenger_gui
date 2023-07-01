#include <string.h>
#include <winsock2.h>
#include <windows.h>
#include <fstream>
#include <cstdio>
#include "tools.h"

#define Quer map<string, string>

using namespace std;
using json = nlohmann::json;


json http_get(const string& command, Quer& queries)
{
    string url = "http://api.barafardayebehtar.ml:8080/";
    url += command + '?';
    for (auto const& [key, val] : queries) if(key != "command") url += key + '=' + val + '&';

    try {
        cerr << "GET request: " << url << endl;
        json jres = json::parse(http::Request(url).send("GET").body);
        cerr << "Success: " << jres << endl;
        return jres;
    } catch (const exception& e) {
        cerr << "Failed: http request failed, error: " << e.what() << endl;
        Sleep(5);
        return http_get(command, queries);
    } 
}

json http_get(Quer& queries)
{
    if(queries.find("command") == queries.end()) {
        throw invalid_argument("invalid http request: command not defined");
    }
    return http_get(queries["command"], queries);
}


// Implemenation of Message class

Message::Message(json jj)
{
    this->body = jj["body"];
    this->date = jj["date"];
    this->src = jj["src"];
    this->dst = jj["dst"];
}

Message::Message(const string& body, const string& time, const string& src, const string& dst)
{
    this->body = body;
    this->date = time;
    this->src = src;
    this->dst = dst;
}


// Implementation of Chat classes

int absChat::messageNum() const
{
    return messages.size();
}

vector<Message*> absChat::getMessages()
{
    return messages;
}

void absChat::addMessage(Message* message)
{
    messages.emplace_back(message);
}

const string absChat::getID() const
{
    return id;
}

void absChat::setID(const string& id)
{
    this->id = id;
}

bool absChat::operator<(const absChat& rval)
{
    int n1 = this->messageNum();
    int n2 = rval.messageNum();
    if (n1+n2== 0) return 0;
    return (this->messages)[n1-1]->date < (rval.messages)[n2-1]->date;
}

absChat::~absChat() 
{
    for(auto x:messages) delete x;
}

void Channel::setAdmin(const string& id)
{
    admin_id = id;
}

const string& Channel::getAdmin()
{
    return admin_id;
}

// Implementation of User class

template<typename T> void loadChats(User*);
User::User()
{
    ifstream ifile("data/main.txt");
    if (!ifile.is_open() || ifile.eof()) {
        is_loggedin = 0;
        return;
    }

    is_loggedin = 1;
    ifile >> token >> username >> password;
    ifile.close();

    loadChats<Chat>(this);
    loadChats<Group>(this);
    loadChats<Channel>(this);
}

void User::retrieveServer()
{
    Quer mm[3];
    mm[0] = {{"command", "getuserlist"}, {"token", token}};
    mm[1] = {{"command", "getgrouplist"}, {"token", token}};
    mm[2] = {{"command", "getchannellist"}, {"token", token}};
    for(auto i:{0,1,2}) {
        json res = http_get(mm[i]);
        if (res["code"] != "200") {
            throw runtime_error("unecpected error");
        }
        for (int j=2;j<res.size();j++) {
            switch (i)
            {
            case 0:
                retrieveChat<Chat>(new Chat(res["block " + to_string(i)]["src"]));
                break;
            case 1:
                retrieveChat<Group>(new Group(res["block " + to_string(i)]["group_name"]));
                break;
            case 2:
                retrieveChat<Channel>(new Channel(res["block " + to_string(i)]["channel_name"]));
                break;
            }
        }
    }
}

bool User::isLoggedin()
{
    return is_loggedin;
}

void User::signup(const string& username, const string& password)
{
    Quer mm {{"command", "signup"}, {"username", username}, {"password", password}};
    json res = http_get(mm);
    if(res["code"]!="200") throw runtime_error(res["message"]);
    login(username, password);
}

void User::login(const string& username, const string& password)
{
    is_loggedin = 1;
    Quer mm {{"command", "login"}, {"username", username}, {"password", password}}; 
    json res = http_get(mm);
    if(res["code"]!="200") throw runtime_error(res["message"]);
    this->token = res["token"];
    this->username = username;
    this->password = password;
}

void User::logout()
{
    is_loggedin = 0;
    Quer mm {{"command", "logout"}, {"username", username}, {"password", password}};
    json res = http_get(mm);
    if(res["code"]!="200") throw runtime_error(res["message"]);
    for (auto x:chats) delete x;
}

const string User::getToken()
{
    return token;
}

const string User::getUser()
{
    return username;
}

void User::addChat(absChat* chat) 
{
    chats.emplace_back(chat);
}

std::vector<absChat*> User::getChats()
{
    return chats;
}

template<typename T> void saveChats(User*);
User::~User()
{

    remove("data/main.txt");
    remove("data/user.txt");
    remove("data/group.txt");
    remove("data/channel.txt");
    if (!is_loggedin) return;

    ofstream ofile("data/main.txt");
    ofile << token << ' ' << username << ' ' << password << '\n';
    ofile.close();

    saveChats<Chat>(this);
    saveChats<Group>(this);
    saveChats<Channel>(this);
}

template<typename T> void saveChats(User* u) {
    ofstream ofile("data/" + T::stringView() + ".txt");
    for (auto c:u->getChats()) if(dynamic_cast<T*>(c) != NULL) {
        ofile << c->getID() << ' ' << c->messageNum() << '\n';
        for (auto m:c->getMessages()) {
            ofile << m->body << ' ' << m->date << ' ' << m->src << ' ' << m->dst << '\n';
        }
    }
    ofile.close();
}

template<typename T> void loadChats(User* u) {
    absChat* c; Message* m; string id; int n;
    ifstream ifile("data/" + T::stringView() + ".txt");
    while (ifile >> id >> n) {
        c = new T(id);
        while (n--) {
            m = new Message();
            ifile >> *m;
            c->addMessage(m);
        }
        u->addChat(c);
    }
    ifile.close();
}
