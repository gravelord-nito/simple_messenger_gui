#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "http/HTTPRequest.hpp"
#include "http/json.hpp"

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
    absChat(const std::string& _id): id(_id) {}
    void addMessage(Message*);
    void setID(const std::string&);
    virtual ~absChat() = 0;
protected:
    std::string id; // contact or group id (dst)
    std::vector<Message*> messages;
};

class Chat: public absChat
{
public:
    Chat(const std::string& _id): absChat(_id) {}
};

class Group: public absChat
{
public:
    Group(const std::string& _id): absChat(_id) {}
};

class Channel: public absChat
{
public:
    Channel(const std::string& _id): absChat(_id) {}
    Channel(const std::string& _id, const std::string& crt): absChat(_id), admin_id(crt) {}
    Channel(const std::string& _id, User* crt);
private:
    std::string admin_id;
};

class User
{
public:
    static bool exist; // singleton
    User(const std::string&, const std::string&);
    //void retrieveFile();
    //void retrieveServer();

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
        addChat(new T(id, this));
    }

    template<typename T>
    void sendMessage(const std::string& body, const std::string& dst)
    {
        std::string s;
        if (std::is_same<T, Group>::value) {
            s = "group";
        } else if (std::is_same<T, Channel>::value) {
            s = "channel";
        } else {
            s = "user";
        }
        std::map<std::string, std::string> mm {{"token", token}, {"body", body}, {"dst", dst}};
        nlohmann::json res = http_get("sendmessage" + s, mm);
        if (res["code"] != "200") {
            throw std::runtime_error(res["message"]);
        }
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
private:
    std::string body;
    std::string time;
    std::string src;
    std::string dst;
};
