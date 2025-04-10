#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

class Admin : public User {
public:
    Admin(string name, string email, string password);
    void addMovie();
    void scheduleShowtime();
};

#endif