#include <string.h>
#include "classes.h"

using namespace std;
using json = nlohmann::json;


json http_get(const string& command, map<string, string>& queries)
{
    string url = "http://api.barafardayebehtar.ml:8080/";
    for (auto c:command) url += c;
    url += '?';
    for (auto const& [key, val] : queries) if(key != "command") {
        for(auto c:key) url += c;
        url += '=';
        for(auto c:val) url += c;
        url += '&';
    }

    try {
        cerr << "GET request: " << url << endl;
        http::Request request(url);
        const auto res = request.send("GET");
        json jres = json::parse(res.body);
        cerr << "Success: " << jres << endl;
        return jres;
    } catch (const exception& e) {
        cerr << "http request failed, error: " << e.what() << endl;
    } 
}


json http_get(map<string, string>& queries)
{
    if(queries.find("command") == queries.end())
        throw invalid_argument("invalid http request: command not defined");
    return http_get(queries["command"], queries);
}


// Implementation of absChat class

void absChat::addMessage(Message* message)
{
    messages.emplace_back(message);
}

// Implementation of Chat class

Chat::Chat(User* mem1, User* mem2)
{
    user[0] = mem1;
    user[1] = mem2;
}

void Chat::addMessage(Message* message)
{
    messages.emplace_back(message);
}

Chat::~Chat(){}

// Implementation of Group class

Group::Group(const string& id, const string& title, User* user)
{
    this->id = id;
    group_title = title;
    members.emplace_back(user);
}

void Group::addMessage(Message* message)
{
    messages.emplace_back(message);
}

void Group::addMember(User* member)
{
    members.emplace_back(member);
}

void Group::setTitle(const string& title)
{
    group_title = title;
}

// Implementation of Channel class

Channel::Channel(const string& id, const string& title, User* user)
{
    this->id = id;
    channel_title = title;
    members.emplace_back(user);
}

void Channel::addMessage(Message* message)
{
    messages.emplace_back(message);
}

void Channel::addMember(User* member)
{
    members.emplace_back(member);
}

void Channel::setTitle(const string& title)
{
    channel_title = title;
}

// Implementation of User class

bool User::exist = 0;

User::User(const string& username, const string& password)
{
    if (User::exist) 
        throw logic_error("User is singleton; called the constructor while an instance existing");
    User::exist = 1;
    this->username = username;
    char cusername[username.length()+1]; strcpy(cusername, username.c_str()); // TODO maybe make function(s) outta this
    char cpassword[password.length()+1]; strcpy(cpassword, password.c_str());
    BYTE* hashed_password = sha256_hash(cpassword, cusername);
    memcpy(this->password, hashed_password, SHA256_BLOCK_SIZE);
    free(hashed_password); 
}

void User::setToken(const string& token)
{
    this->token = token;
}

const string User::getToken()
{
    return token;
}

bool User::checkPassword(const string& password)
{
    char cusername[username.length()+1]; strcpy(cusername, username.c_str()); // TODO maybe make function(s) outta this
    char cpassword[password.length()+1]; strcpy(cpassword, password.c_str());
    BYTE* hashed_password = sha256_hash(cpassword, cusername);
    for (int i=0; i<SHA256_BLOCK_SIZE; i++) if (this->password[i] != hashed_password[i]) return false;
    return true;
}

void User::addChat(absChat* chat) 
{
    chats.emplace_back(chat);
}

User::~User()
{
    User::exist = 0;
}

// Implementation of Message class

Message::Message(const string& body, const string& time, User* sender, absChat* destination)
{
    this->body = body;
    this->time = time;
    this->sender = sender;
    this->destination = destination;
}

Message::~Message() {}