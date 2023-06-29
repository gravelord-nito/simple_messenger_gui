#include <iostream>
#include <algorithm>
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

void test6()
{
    map<string, string> m {
        {"command", "logout"},
        {"username", "dara"},
        {"password", "1234"}
    }; http_get(m);
    User M("dara", "1234");
    absChat* cc; 
    cc = new Chat("sara");
    M.sendMessage<Chat>("message", cc);
    delete cc;

    cc = M.createChat<Group>("erfangeramzzzzzzili");
    M.sendMessage<Group>("message", cc);
    delete cc;

}

void test7()
{
    map<string, string> m {
        {"command", "logout"},
        {"username", "sara"},
        {"password", "1234"}
    }; http_get(m);
    User M("sara", "1234");
    M.retrieveServer();
}

int main()
{
    test7();

    return 0;
}