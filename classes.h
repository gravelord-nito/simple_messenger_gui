#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

class absChat;
class Chat;
class GroupChat;
class Channel;
class Message;
class User;


class absChat // TODO add pins
{
public:
    virtual void addMessage(Message&) = 0;
protected:
    vector<Message&> messages; // TODO implement comparator
};

class Chat: public absChat
{
public:
    Chat(User* mem1, User* mem2);
    void addMessage(Message&) override;
    ~Chat();
private:
    User* user[2];
};

class Group: public absChat
{
public:
    Group(string, string, User&);
    void addMessage(Message&) override;
    void addMember(User&);
    void setTitle(string);
private:
    string id;
    string group_title;
    vector<User&> members;
};

class Channel: public absChat
{
public:
    Channel(string, string, User&);
    void addMessage(Message&) override;
    void addMember(User&);
    void setTitle(string);
private:
    string id;
    string channel_title;
    vector<User&> members;
};

class User
{
public:
    User() = delete;
    User(string, string, string, string); // no token and chats
    // void setToken(string);
    const string getToken() const;
    // void setUserName(const string s);
    // string getUserName() const;
    // void setPassword(BYTE*);
    bool checkPassword(string) const;
    // void setFname(string);
    // string getFname() const;
    // void setSname(string);
    // string getSname() const;
    void addChat(absChat&);
private:
    string token;
    string username;
    BYTE password[SHA256_BLOCK_SIZE];
    string first_name;
    string last_name;
    set<absChat&> chats; // TODO implement comparator
};

class Message
{
public:
    Message() = delete;
    Message(string, string, User*, absChat*);
    // void setMessage(string);
    // void setTime(string);
    // string getTime() const;
    ~Message();
private:
    string body;
    string time;
    User* sender;
    absChat* destination;
};
