#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "User.h"

class Customer : public User {
public:
    Customer(string name, string email, string password);
    void selectMovie();
    void bookTicket();
    void makePayment();
};

#endif