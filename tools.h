#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "HTTPRequest.hpp"
#include "json.hpp"

nlohmann::json http_get(std::map<std::string, std::string>&);
nlohmann::json http_get(const std::string&, std::map<std::string, std::string>&);


class absChat;
class Chat;
class Group;
class Channel;
class Message;
class User;


class absChat // TODO add operator <
{
public:
    void addMessage(Message*);
    void setID(const std::string&);
    virtual ~absChat() = 0;
protected:
    std::string id; // id contact or group (dst)
    std::vector<Message*> messages;
};

class Chat: public absChat {};

class Group: public absChat {};

class Channel: public absChat {};

class User
{
public:
    static bool exist; // singleton
    User(const std::string&, const std::string&);
    const std::string getToken();
    const std::string getUser();
    void addChat(absChat*);
    template<typename T>
    void createChat(const std::string& id)
    {
        std::string s = (std::is_same<T, Group>::value ? "group":"channel");
        std::map<std::string, std::string> mm {{"token", token}, {s + "_name", id}};
        nlohmann::json res = http_get("create" + s, mm);
        if (res["code"]!="200"){
            throw std::runtime_error(res["message"]);
        }
        addChat(new T);
    }
    ~User();
private:
    std::string token;
    std::string username;
    std::string password;
    std::vector<absChat*> chats; // change it to set??
};

class Message
{
public:
    Message() = delete;
    Message(const std::string&, const std::string&, const std::string&, const std::string&);
    ~Message();
private:
    std::string body;
    std::string time;
    std::string src;
    std::string dst;
};