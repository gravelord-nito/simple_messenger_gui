#include <string.h>
#include <type_traits>
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


// Implementation of absChat class

void absChat::addMessage(Message* message)
{
    messages.emplace_back(message);
}

const string absChat::getID()
{
    return id;
}

void absChat::setID(const string& id)
{
    this->id = id;
}

absChat::~absChat() {}

// Implementation of Chat class


// Implementation of Group class


// Implementation of Channel class

Channel::Channel(const std::string& _id, User* crt)
    : absChat(_id), admin_id(crt->getUser())
{
    crt->sendMessage<Channel>(crt->getUser(), this);
}

// Implementation of User class

bool User::exist = 0;

User::User(const string& username, const string& password)
{
    if (User::exist) {
        throw logic_error("User is singleton; called the constructor while an instance existing");
    }

    this->username = username;
    this->password = password;

    Quer mm {{"username", username}, {"password", password}};
    http_get("signup", mm);
    json res = http_get("login", mm);
    if(res["code"]!="200"){
        throw runtime_error(res["message"]);
    }

    User::exist = 1;
    this->token = res["token"];
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

User::~User()
{
    Quer mm {{"username", username}, {"password", password}};
    http_get("logout", mm);
    User::exist = 0;
    for (auto& x:chats) delete x;
}

// Implemenation of Message class

Message::Message(const string& body, const string& time, const string& src, const string& dst)
{
    this->body = body;
    this->time = time;
    this->src = src;
    this->dst = dst;
}