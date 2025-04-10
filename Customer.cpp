#include "Customer.h"
#include <iostream>

Customer::Customer(string name, string email, string password) : User(name, email, password) {}

void Customer::selectMovie() {
    cout << name << " is selecting a movie." << endl;
}

void Customer::bookTicket() {
    cout << name << " booked a ticket." << endl;
}

void Customer::makePayment() {
    cout << name << " made a payment." << endl;
}