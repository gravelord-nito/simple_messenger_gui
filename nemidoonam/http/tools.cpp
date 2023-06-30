#include <string.h>
#include <chrono>
#include <thread>
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
        this_thread::sleep_for(chrono::milliseconds(5000));
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
    this->date = date;
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

Channel::Channel(const std::string& _id, User* crt)
    : absChat(_id), admin_id(crt->getUser())
{
    crt->sendMessage<Channel>(crt->getUser(), this);
}

// Implementation of User class

User::User(const string& username, const string& password)
{
    this->username = username;
    this->password = password;

    Quer mm {{"username", username}, {"password", password}};
    http_get("signup", mm);
    json res = http_get("login", mm);
    if(res["code"]!="200"){
        throw runtime_error(res["message"]);
    }

    this->token = res["token"];
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
                retrieveChat<Group>(new Chat(res["block " + to_string(i)]["group_name"]));
                break;
            case 2:
                retrieveChat<Channel>(new Chat(res["block " + to_string(i)]["channel_name"]));
                break;
            }
        }
    }
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

User::~User()
{
    Quer mm {{"username", username}, {"password", password}};
    http_get("logout", mm);
    for (auto& x:chats) delete x;
}