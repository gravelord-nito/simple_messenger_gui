#include <string.h>
#include "sha256.h"
#include "classes.h"

using namespace std;


// Implementation of absChat class

void absChat::addMessage(Message& message)
{
    messages.emplace_back(message);
}

// Implementation of Chat class

Chat::Chat(User* mem1, User* mem2)
{
    user[0] = mem1;
    user[1] = mem2;
}

void Chat::addMessage(Message& message)
{
    messages.emplace_back(message);
}

Chat::~Chat(){}

// Implementation of Group class

Group::Group(string id, string title, User& user)
{
    this->id = id;
    group_title = title;
    members.emplace_back(user);
}

void Group::addMessage(Message& message)
{
    messages.emplace_back(message);
}

void Group::addMember(User& member)
{
    members.emplace_back(member);
}

void Group::setTitle(string title)
{
    group_title = title;
}

// Implementation of Channel class

Channel::Channel(string id, string title, User& user)
{
    this->id = id;
    channel_title = title;
    members.emplace_back(user);
}

void Channel::addMessage(Message& message)
{
    messages.emplace_back(message);
}

void Channel::addMember(User& member)
{
    members.emplace_back(member);
}

void Channel::setTitle(string title)
{
    channel_title = title;
}

// Implementation of User class

User::User(string username, string password, string first_name, string last_name)
{
    this->username = username;
    char cusername[username.length()+1]; strcpy(cusername, username.c_str()); // TODO maybe make function(s) outta this
    char cpassword[password.length()+1]; strcpy(cpassword, password.c_str());
    BYTE* hashed_password = sha256_hash(cpassword, cusername);
    memcpy(this->password, hashed_password, SHA256_BLOCK_SIZE);
    this->first_name = first_name;
    this->last_name = last_name;
}

const string User::getToken() const
{
    return token;
}

bool User::checkPassword(string password) const
{
    char cusername[username.length()+1]; strcpy(cusername, username.c_str()); // TODO maybe make function(s) outta this
    char cpassword[password.length()+1]; strcpy(cpassword, password.c_str());
    BYTE* hashed_password = sha256_hash(cpassword, cusername);
    for (int i=0; i<SHA256_BLOCK_SIZE; i++) if (this->password[i] != hashed_password[i]) return false;
    return true;
}

void User::addChat(absChat& chat) 
{
    chats.insert(chat);
}

// Implementation of Message class

Message::Message(string body, string time, User* sender, absChat* destination)
{
    this->body = body;
    this->time = time;
    this->sender = sender;
    this->destination = destination;
}

Message::~Message() {}