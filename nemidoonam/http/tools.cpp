#include <string.h>
#include <winsock2.h>
#include <windows.h>
#include <fstream>
#include <cstdio>
#include "tools.h"

#define Quer map<string, string>

using namespace std;
using json = nlohmann::json;

const string Src[] = {"src", "group_name", "channel_name"};
const string Stype[] = {"user", "group", "channel"};

json http_get(const string& command, Quer& queries) {
    string url = "http://api.barafardayebehtar.ml:8080/";
    url += command + '?';
    for (auto const& [key, val] : queries) if(key != "command") url += key + '=' + val + '&';

    try {
        cerr << "GET request: " << url << endl;
        json jres = json::parse(http::Request(url).send("GET").body);
        cerr << "Success: " << jres << endl;
        if (jres["code"]!="200") throw runtime_error(jres["message"]);
        return jres;
    } catch (const exception& e) {
        cerr << "Failed: http request failed, error: " << e.what() << endl;
        return json();
        Sleep(5000);
        return http_get(command, queries);
    } 
}

json http_get(Quer& queries) {
    if(queries.find("command") == queries.end()) {
        throw invalid_argument("invalid http request: command not defined");
    }
    return http_get(queries["command"], queries);
}

User::User() {
    ifstream ifile("data.txt");
    // cerr << ifile.is_open() << endl;
    if (!ifile.is_open() || ifile.eof()) {
        is_loggedin = 0;
        ifile.close();
        return;
    }

    is_loggedin = 1;
    string id; int ty, n; json jj;
    ifile >> token >> username >> password;
    while (ifile >> id >> ty >> n)for (int i=0;i<n;i++) { ifile >> jj; chats[make_pair(id, (type)ty)].push_back(jj); }
    ifile.close();
}

void User::retrieveChat(const std::pair<std::string, type>& p) {
    string date = "00000000000000";
    if (chats.find(p) != chats.end()) {
        string last = chats[p].back()["date"];
        date = last.substr(0,4) + last.substr(5,2) + last.substr(8,2) + last.substr(11,2) + last.substr(14,2) + last.substr(17,2);
    }
    Quer mm {{"command", "get" + Stype[p.second] + "chats"}, {"dst", p.first}, {"date", date}, {"token", token}};
    json res = http_get(mm);
    int i = 0;
    if (chats.find(p) != chats.end()) i = chats[p].size();
    while (res["block " + to_string(i)] != nullptr) {
        chats[p].push_back(res["block " + to_string(i++)]);
    }
}

void User::retrieveServer() {
    for (auto i:{0,1,2}) {
        Quer mm {{"command", "get" + Stype[i] + "list"}, {"token", token}};
        json res = http_get(mm);
        for (int j = 0 ; j < res.size() - 2; j++) retrieveChat(make_pair((string)res["block " + to_string(j)][Src[i]], (type)i));
    }
}

bool User::isLoggedin() { return is_loggedin; }

void User::signup(const string& username, const string& password) {
    Quer mm {{"command", "signup"}, {"username", username}, {"password", password}}; 
    http_get(mm);
    login(username, password);
}

void User::login(const string& username, const string& password) {
    is_loggedin = 1;
    Quer mm {{"command", "login"}, {"username", username}, {"password", password}}; 
    this->token = http_get(mm)["token"];
    this->username = username;
    this->password = password;
}

void User::logout() {
    is_loggedin = 0;
    Quer mm {{"command", "logout"}, {"username", username}, {"password", password}}; 
    http_get(mm);
}

const string User::getToken() { return token; }

const string User::getUser() { return username; }

vector<json> User::getChat(const pair<string, type>& p) { return chats[p]; }

map<pair<string, User::type>, vector<json>> User::getChats() { return chats; }

void User::joinChat(const pair<string, type>& p) {
    Quer mm {{"command", "join" + Stype[p.second]}, {Stype[p.second] + "_name", p.first}, {"token", token}};
    http_get(mm);
    retrieveChat(p);
}

void User::createChat(const std::pair<std::string, type>& p) {
    Quer mm {{"command", "create" + Stype[p.second]}, {Stype[p.second] + "_name", p.first}, {"token", token}};
    http_get(mm);
    chats[p] = vector<json>();
}

void User::sendMessage(const std::string& body, const std::pair<std::string, type>& p) {
    Quer mm {{"command", "sendmessage" + Stype[p.second]}, {"body", body}, {"dst", p.first}, {"token", token}};
    http_get(mm);
    retrieveChat(p);
}


User::~User() {
    remove("data.txt");
    if (!is_loggedin) return;

    ofstream ofile("data.txt");
    ofile << token << ' ' << username << ' ' << password << '\n';
    for (auto const& [id, messages] : chats) {
        ofile << id.first << ' ' << id.second << ' ' << messages.size() << '\n';
        for (auto const& m : messages) ofile << m << '\n';
    }
}
