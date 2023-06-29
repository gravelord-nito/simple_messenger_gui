#include <iostream>
#include "classes.h"

using namespace std;

void test1() 
{
    User user("a", "badman");
    cerr << user.checkPassword("badmad") << endl;
    cerr << user.checkPassword("badman") << endl;
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
    User a2("a","b");
    // a2.~User();
    User a1("d","f");
}

int main()
{
    

    return 0;
}
