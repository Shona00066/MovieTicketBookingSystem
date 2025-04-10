#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    string name;
    string email;
    string password;

public:
    User(string name, string email, string password);
    void login();
    void logout();
    string getName() { return name; }
};

#endif