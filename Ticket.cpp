#include "Ticket.h"
#include <iostream>

Ticket::Ticket(int ticketID, Customer customer, Showtime showtime, Seat seat, double price)
    : ticketID(ticketID), customer(customer), showtime(showtime), seat(seat), price(price) {}

void Ticket::printTicket() {
    cout << "========== TICKET ==========" << endl;
    cout << "Ticket ID: " << ticketID << endl;
    cout << "Customer: " << customer.getName() << endl;
    cout << "Movie: " << showtime.getMovie().getTitle() << endl;
    cout << "Theater: " << showtime.getTheater().getName() << endl;
    cout << "Showtime: " << showtime.getTime() << endl;
    cout << "Seat: ";
    seat.showSeatInfo();
    cout << "Price: $" << price << endl;
    cout << "============================" << endl;
}