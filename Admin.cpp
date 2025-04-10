#include "Admin.h"
#include <iostream>

Admin::Admin(string name, string email, string password) : User(name, email, password) {}

void Admin::addMovie() {
    cout << "Admin " << name << " added a new movie." << endl;
}

void Admin::scheduleShowtime() {
    cout << "Admin " << name << " scheduled a new showtime." << endl;
}