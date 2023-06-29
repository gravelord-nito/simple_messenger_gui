#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "sha256.h"
#include "HTTPRequest.hpp"
#include "json.hpp"

nlohmann::json http_get(std::map<std::string, std::string>&);
nlohmann::json http_get(const std::string&, std::map<std::string, std::string>&);


class absChat;
class Chat;
class GroupChat;
class Channel;
class Message;
class User;

class absChat // TODO add pins
{
public:
    virtual void addMessage(Message*) = 0;
protected:
    std::vector<Message*> messages; // TODO sort it
};

class Chat: public absChat
{
public:
    Chat(User* mem1, User* mem2);
    void addMessage(Message*) override;
    ~Chat();
private:
    User* user[2];
};

class Group: public absChat
{
public:
    Group(const std::string&, const std::string&, User*);
    void addMessage(Message*) override;
    void addMember(User*);
    void setTitle(const std::string&);
private:
    std::string id;
    std::string group_title;
    std::vector<User*> members;
};

class Channel: public absChat
{
public:
    Channel(const std::string&, const std::string&, User*);
    void addMessage(Message*) override;
    void addMember(User*);
    void setTitle(const std::string&);
private:
    std::string id;
    std::string channel_title;
    std::vector<User*> members;
};

class User
{
public:
    static bool exist;
    User() = delete;
    User(const std::string&, const std::string&);
    bool checkPassword(const std::string&);
    void setToken(const std::string&);
    const std::string getToken();
    void addChat(absChat*);
    ~User();
private:
    std::string token;
    std::string username;
    BYTE password[SHA256_BLOCK_SIZE];
    std::vector<absChat*> chats;
};

class Message
{
public:
    Message() = delete;
    Message(const std::string&, const std::string&, User*, absChat*);
    ~Message();
private:
    std::string body;
    std::string time;
    User* sender;
    absChat* destination;
};
