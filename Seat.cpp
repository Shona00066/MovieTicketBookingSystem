#include "Seat.h"
#include <iostream>

Seat::Seat(int seatNumber, char row) {
    this->seatNumber = seatNumber;
    this->row = row;
    this->isBooked = false;
}

bool Seat::reserveSeat() {
    if (isBooked) {
        std::cout << "Seat " << row << seatNumber << " is already booked.\n";
        return false;
    }
    isBooked = true;
    std::cout << "Seat " << row << seatNumber << " reserved successfully.\n";
    return true;
}

void Seat::showSeatInfo() {
    std::cout << "Seat: " << row << seatNumber << " - " << (isBooked ? "Booked" : "Available") << std::endl;
}