#include <string.h>
#include <winsock2.h>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <cstdio>
#include <thread>
#include <chrono>
#include <set>
#include "imgui.h"
#include "tools.h"

#define Quer map<string, string>

using namespace std;
using json = nlohmann::json;

const string Src[] = { "src", "group_name", "channel_name" };
const string Stype[] = { "user", "group", "channel" };

namespace MyUI {

    using namespace Myapp;

    Myapp::User u;
    bool runtrd = 1;
    bool signup = 0;
    char str1[128] = "";
    char str2[128] = "";
    pair<string, User::type> selected = make_pair("", User::type::user);
    string error;

    void RenderLogin() {
        ImGui::Begin("Login");
        ImGui::InputText("username", str1, IM_ARRAYSIZE(str1));
        ImGui::InputText("password", str2, IM_ARRAYSIZE(str2));
        if (ImGui::Button("Login")) {
            try {
                u.login(str1, str2);
            }
            catch (const exception& e) {
                error = e.what();
                ImGui::OpenPopup("error popup");
            }
        }
        if (ImGui::Button("dont have an account? signup here")) {
            signup = 1;
        }
        if (ImGui::BeginPopup("error popup")) {
            ImGui::Text(error.c_str());
            ImGui::EndPopup();
        }
        ImGui::End();
    }

    void RenderSignup() {
        ImGui::Begin("Signup");
        ImGui::InputText("username", str1, IM_ARRAYSIZE(str1));
        ImGui::InputText("password", str2, IM_ARRAYSIZE(str2));
        if (ImGui::Button("Signup")) {
            try {
                u.signup(str1, str2);
            }
            catch (const exception& e) {
                error = e.what();
                ImGui::OpenPopup("error popup");
            }
        }
        if (ImGui::Button("have an account? login here")) {
            signup = 0;
        }
        if (ImGui::BeginPopup("error popup")) {
            ImGui::Text(error.c_str());
            ImGui::EndPopup();
        }
        ImGui::End();
    }

    void ShowChat(pair<string, User::type> id) {
        ImGui::Begin("Chat");
        ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), (Stype[id.second] + " MESSAGES").c_str());
        auto& chat = u.getChat(id);
        static float wrap_width = 600.0f;
        for (auto& m : chat) {
            ImGui::TextColored(ImVec4(1.0f, 0.0f, 1.0f, 1.0f), ('-' + ((string)m["src"])).c_str());
            ImGui::TextWrapped(((string)m["body"]).c_str());
            ImGui::Spacing();
        }
        static char str3[2048] = "";
        ImGui::InputText(" ", str3, IM_ARRAYSIZE(str3));
        ImGui::SameLine();
        if (ImGui::Button("SEND")) {
            try {
                u.sendMessage(str3, selected);
            }
            catch (const exception& e) {
                error = e.what();
                ImGui::OpenPopup("error popup");
            }
            str3[0] = '\0';
        }
        if (ImGui::BeginPopup("error popup")) {
            ImGui::Text(error.c_str());
            ImGui::EndPopup();
        }
        ImGui::End();
    }

    void ShowList() {
        ImGui::Begin("List");
        auto& chats = u.getChats();
        for (auto const& [id, vec] : chats)
        {
            if (id.first == "") continue;
            if (ImGui::Selectable(id.first.c_str(), selected == id))
                selected = id;
        }
        if (selected.first != "") {
            ShowChat(selected);
        }
        ImGui::End();
    }

    void Options() {
        ImGui::Begin("Options");
        static char str4[32] = "";
        ImGui::InputText("enter group/channel id", str4, IM_ARRAYSIZE(str4));
        try {
            if (ImGui::Button("new contact")) {
                u.addChat(make_pair(str4, User::type::user));
            }
            if (ImGui::Button("create group")) {
                u.createChat(make_pair(str4, User::type::group));
            }
            if (ImGui::Button("create channel")) {
                u.createChat(make_pair(str4, User::type::channel));
            }
            if (ImGui::Button("join group")) {
                u.joinChat(make_pair(str4, User::type::group));
            }
            if (ImGui::Button("join channel")) {
                u.joinChat(make_pair(str4, User::type::channel));
            }
            if (ImGui::Button("Logout")) {
                selected = make_pair("", User::type::user);
                u.logout();
            }
        }
        catch (const exception& e) {
            error = e.what();
            ImGui::OpenPopup("error popup");
        }
        if (ImGui::BeginPopup("error popup")) {
            ImGui::Text(error.c_str());
            ImGui::EndPopup();
        }
        ImGui::End();
    }

    void UpdateChats() {
        while (runtrd) {
            if (u.isLoggedin()) {
                try {
                    u.retrieveServer();
                }
                catch (const exception& e) {
                    cerr << "Thread error: " << e.what() << endl;
                }
            }
            this_thread::sleep_for(5000ms);
        }
    }

    void CutThread() {
        runtrd = 0;
    }

    void RenderUI() {
        //ImGui::ShowDemoWindow();

        static bool opt_fullscreen = true;
        static bool opt_padding = false;
        static ImGuiDockNodeFlags dockspace_flags = ImGuiDockNodeFlags_None;

        // We are using the ImGuiWindowFlags_NoDocking flag to make the parent window not dockable into,
        // because it would be confusing to have two docking targets within each others.
        ImGuiWindowFlags window_flags = ImGuiWindowFlags_MenuBar | ImGuiWindowFlags_NoDocking;
        if (opt_fullscreen)
        {
            const ImGuiViewport* viewport = ImGui::GetMainViewport();
            ImGui::SetNextWindowPos(viewport->WorkPos);
            ImGui::SetNextWindowSize(viewport->WorkSize);
            ImGui::SetNextWindowViewport(viewport->ID);
            ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);
            ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
            window_flags |= ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove;
            window_flags |= ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoNavFocus;
        }
        else
        {
            dockspace_flags &= ~ImGuiDockNodeFlags_PassthruCentralNode;
        }

        // When using ImGuiDockNodeFlags_PassthruCentralNode, DockSpace() will render our background
        // and handle the pass-thru hole, so we ask Begin() to not render a background.
        if (dockspace_flags & ImGuiDockNodeFlags_PassthruCentralNode)
            window_flags |= ImGuiWindowFlags_NoBackground;

        // Important: note that we proceed even if Begin() returns false (aka window is collapsed).
        // This is because we want to keep our DockSpace() active. If a DockSpace() is inactive,
        // all active windows docked into it will lose their parent and become undocked.
        // We cannot preserve the docking relationship between an active window and an inactive docking, otherwise
        // any change of dockspace/settings would lead to windows being stuck in limbo and never being visible.
        if (!opt_padding)
            ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0.0f, 0.0f));
        ImGui::Begin("DockSpace Demo", new bool(1), window_flags);
        if (!opt_padding)
            ImGui::PopStyleVar();

        if (opt_fullscreen)
            ImGui::PopStyleVar(2);

        // Submit the DockSpace
        ImGuiIO& io = ImGui::GetIO();
        if (io.ConfigFlags & ImGuiConfigFlags_DockingEnable)
        {
            ImGuiID dockspace_id = ImGui::GetID("MyDockSpace");
            ImGui::DockSpace(dockspace_id, ImVec2(0.0f, 0.0f), dockspace_flags);
        }

        if (ImGui::BeginMenuBar())
        {
            if (ImGui::BeginMenu("Options"))
            {
                // Disabling fullscreen would allow the window to be moved to the front of other windows,
                // which we can't undo at the moment without finer window depth/z control.
                ImGui::MenuItem("Fullscreen", NULL, &opt_fullscreen);
                ImGui::MenuItem("Padding", NULL, &opt_padding);
                ImGui::Separator();

                if (ImGui::MenuItem("Flag: NoSplit", "", (dockspace_flags & ImGuiDockNodeFlags_NoSplit) != 0)) { dockspace_flags ^= ImGuiDockNodeFlags_NoSplit; }
                if (ImGui::MenuItem("Flag: NoResize", "", (dockspace_flags & ImGuiDockNodeFlags_NoResize) != 0)) { dockspace_flags ^= ImGuiDockNodeFlags_NoResize; }
                if (ImGui::MenuItem("Flag: NoDockingInCentralNode", "", (dockspace_flags & ImGuiDockNodeFlags_NoDockingInCentralNode) != 0)) { dockspace_flags ^= ImGuiDockNodeFlags_NoDockingInCentralNode; }
                if (ImGui::MenuItem("Flag: AutoHideTabBar", "", (dockspace_flags & ImGuiDockNodeFlags_AutoHideTabBar) != 0)) { dockspace_flags ^= ImGuiDockNodeFlags_AutoHideTabBar; }
                if (ImGui::MenuItem("Flag: PassthruCentralNode", "", (dockspace_flags & ImGuiDockNodeFlags_PassthruCentralNode) != 0, opt_fullscreen)) { dockspace_flags ^= ImGuiDockNodeFlags_PassthruCentralNode; }
                ImGui::Separator();

                ImGui::EndMenu();
            }

            ImGui::EndMenuBar();
        }

        ImGui::End();

        if (!u.isLoggedin()) {
            if (!signup) RenderLogin();
            else RenderSignup();
        }
        else {
            ShowList();
            Options();
        }

    }

}

namespace Myapp {

    json http_get(const string& command, Quer& queries) {
        string url = "http://api.barafardayebehtar.ml:8080/";
        url += command + '?';
        for (auto const& [key, val] : queries) if (key != "command") url += key + '=' + val + '&';

        json jres;
        try {
            cerr << "GET request: " << url << endl;
            jres = json::parse(http::Request(url).send("GET").body);
            cerr << "Success: " << jres << endl;
        }
        catch (const exception& e) {
            cerr << "Failed: http request failed, error: " << e.what() << endl;
            Sleep(5000);
            return http_get(command, queries);
        }

        if (jres["code"] != "200") throw runtime_error(jres["message"]);
        return jres;
    }

    json http_get(Quer& queries) {
        if (queries.find("command") == queries.end()) {
            throw invalid_argument("invalid http request: command not defined");
        }
        return http_get(queries["command"], queries);
    }

    User::User() {
        ifstream ifile("data.txt");
        if (!ifile.is_open()) {
            is_loggedin = 0;
            ifile.close();
            return;
        }

        is_loggedin = 1;
        string id; int ty, n; json jj;
        ifile >> token >> username >> password;
        while (ifile >> id >> ty >> n)for (int i = 0; i < n; i++) { ifile >> jj; chats[make_pair(id, (type)ty)].push_back(jj); }
        ifile.close();
    }

    void User::retrieveChat(const std::pair<std::string, type>& p) {
        string date = "00000000000000";
        if (chats[p].size()) {
            string last = chats[p].back()["date"];
            date = last.substr(0, 4) + last.substr(5, 2) + last.substr(8, 2) + last.substr(11, 2) + last.substr(14, 2) + last.substr(17, 2);
        }
        Quer mm{ {"command", "get" + Stype[p.second] + "chats"}, {"dst", p.first}, {"date", date}, {"token", token} };
        json res = http_get(mm);
        int i = 0;
        if (chats[p].size()) i++;
        while (res["block " + to_string(i)] != nullptr) {
            chats[p].push_back(res["block " + to_string(i++)]);
        }
    }

    void User::retrieveServer() {
        for (auto i : { 0,1,2 }) {
            Quer mm{ {"command", "get" + Stype[i] + "list"}, {"token", token} };
            json res = http_get(mm);
            for (int j = 0; j < res.size() - 2; j++) retrieveChat(make_pair((string)res["block " + to_string(j)][Src[i]], (type)i));
        }
    }

    bool User::isLoggedin() { return is_loggedin; }

    void User::signup(const string& username, const string& password) {
        Quer mm{ {"command", "signup"}, {"username", username}, {"password", password} };
        http_get(mm);
        login(username, password);
    }

    void User::login(const string& username, const string& password) {
        try {
            Quer mm{ {"command", "login"}, {"username", username}, {"password", password} };
            json res = http_get(mm);
            this->token = res["token"];
            this->username = username;
            this->password = password;
            is_loggedin = 1;
        }
        catch (const exception& e) {
            throw runtime_error("Already logged in");
        }
    }

    void User::logout() {
        is_loggedin = 0;
        Quer mm{ {"command", "logout"}, {"username", username}, {"password", password} };
        http_get(mm);
        chats.clear();
    }

    const string User::getToken() { return token; }

    const string User::getUser() { return username; }

    void User::addChat(const pair<string, type>& p) { chats[p] = vector<json>(); }

    const vector<json>& User::getChat(const pair<string, type>& p) { return chats[p]; }

    const map<pair<string, User::type>, vector<json>>& User::getChats() { return chats; }

    void User::joinChat(const pair<string, type>& p) {
        Quer mm{ {"command", "join" + Stype[p.second]}, {Stype[p.second] + "_name", p.first}, {"token", token} };
        http_get(mm);
        retrieveChat(p);
    }

    void User::createChat(const std::pair<std::string, type>& p) {
        Quer mm{ {"command", "create" + Stype[p.second]}, {Stype[p.second] + "_name", p.first}, {"token", token} };
        http_get(mm);
        chats[p] = vector<json>();
    }

    void User::sendMessage(const std::string& body, const std::pair<std::string, type>& p) {
        Quer mm{ {"command", "sendmessage" + Stype[p.second]}, {"body", body}, {"dst", p.first}, {"token", token} };
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
}
