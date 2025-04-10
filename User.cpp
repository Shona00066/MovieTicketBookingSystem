#include "User.h"
#include <iostream>

User::User(string name, string email, string password) {
    this->name = name;
    this->email = email;
    this->password = password;
}

void User::login() {
    cout << name << " logged in successfully." << endl;
}

void User::logout() {
    cout << name << " logged out." << endl;
}