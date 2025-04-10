#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include <iostream>

using namespace std;

template <typename T>
class Payment {
private:
    int paymentID;
    double amount;
    T method; // To‘lov turi (string, int, yoki boshqa obyekt)

public:
    Payment(int paymentID, double amount, T method);
    void processPayment();
};

#endif