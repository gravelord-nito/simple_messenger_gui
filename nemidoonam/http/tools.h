#pragma once

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "HTTPRequest.hpp"
#include "json.hpp"


nlohmann::json http_get(std::map<std::string, std::string>&);
nlohmann::json http_get(const std::string&, std::map<std::string, std::string>&);

class User {
public:
    // static bool exist; // singleton ??
    enum type { user, group, channel };

    User();
    void retrieveChat(const std::pair<std::string, type>&);
    void retrieveServer();

    bool isLoggedin();
    const std::string getToken();
    const std::string getUser();
    std::vector<nlohmann::json> getChat(const std::pair<std::string, type>&);
    std::map<std::pair<std::string, type>, std::vector<nlohmann::json>> getChats();

    void signup(const std::string&, const std::string&);
    void login(const std::string&, const std::string&);
    void logout();

    void joinChat(const std::pair<std::string, type>&);
    void createChat(const std::pair<std::string, type>&);
    void sendMessage(const std::string&, const std::pair<std::string, type>&);

    ~User();
private:
    bool is_loggedin;
    std::string token;
    std::string username;
    std::string password;
    std::map<std::pair<std::string, type>, std::vector<nlohmann::json>> chats; // (id, type) -> messages
};
