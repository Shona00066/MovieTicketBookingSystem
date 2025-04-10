#include "Showtime.h"
#include <iostream>

Showtime::Showtime(Movie movie, Theater theater, string time, int seatCount)
    : movie(movie), theater(theater), time(time), availableSeats(seatCount, true) {}

void Showtime::displaySeats() {
    cout << "Seats for " << movie.getTitle() << " at " << time << " in " << theater.getName() << ":";
    for (int i = 0; i < availableSeats.size(); i++) {
        cout << (availableSeats[i] ? "[O] " : "[X] ");
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;
}

bool Showtime::bookSeat(int seatNumber) {
    if (seatNumber < 0 || seatNumber >= availableSeats.size()) {
        cout << "Invalid seat number! ";
        return false;
    }
    if (!availableSeats[seatNumber]) {
        cout << "Seat already booked! ";
        return false;
    }
    availableSeats[seatNumber] = false;
    cout << "Seat " << seatNumber + 1 << " booked successfully! ";
    return true;
}
