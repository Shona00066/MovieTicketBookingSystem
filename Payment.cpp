#include "Payment.h"

template <typename T>
Payment<T>::Payment(int paymentID, double amount, T method) {
    this->paymentID = paymentID;
    this->amount = amount;
    this->method = method;
}

template <typename T>
void Payment<T>::processPayment() {
    cout << "Processing payment ID: " << paymentID << endl;
    cout << "Amount: $" << amount << endl;
    cout << "Payment method: " << method << endl;
    cout << "Payment successful!\n";
}

// Template instantiation
template class Payment<string>; // Faqat string to‘lov usuli uchun
