#ifndef TICKET_H
#define TICKET_H

#include <string>
#include "Customer.h"
#include "Showtime.h"
#include "Seat.h"

using namespace std;

class Ticket {
private:
    int ticketID;
    Customer customer;
    Showtime showtime;
    Seat seat;
    double price;

public:
    Ticket(int ticketID, Customer customer, Showtime showtime, Seat seat, double price);
    void printTicket();
};

#endif