#include <iostream>
#include "tools.h"

using namespace std;

void test1() 
{
    User user("dara", "1234");
}

void test2()
{
    map<string, string> m[5];
    m[0] = {
        {"command", "login"},
        {"username", "sara"},
        {"password", "1234"}
    };
    m[1] = {
        {"username", "sara"},
        {"command", "logout"},
        {"password", "1234"}
    };
    m[2] = {
        {"command", "signup"},
        {"username", "hesam"},
        {"password", "masterpasswhoevencares"},
        {"firstname", "test"},
        {"secondname", "server"}
    };
    m[3] = {
        {"command", "login"},
        {"username", "hesam"},
        {"password", "masterpasswhoevencares"}
    };
    m[4] = {
        {"command", "login"},
        {"username", "dara"},
        {"password", "1234"}
    };

    for (int i=0;i<5;i++)
        cout << http_get(m[i]) << endl;
}

void test3()
{
    User a2("dara","1234");
    a2.~User();
    User a1("d","f");
}

void test4()
{
    char c = 'a' + rand()%26;
    User a("mara"+c,"1234");
    a.createChat<Channel>("mamadkhafanak"+c);
}

void test5()
{
    map<string, string> m = {
        {"command", "signup"},
        {"username", "hesam2"},
        {"password", "masterpasswhoevencares"},
        {"firstname", "test"},
        {"secondname", "server"}
    };
    http_get(m);
}

int main()
{

    return 0;
}