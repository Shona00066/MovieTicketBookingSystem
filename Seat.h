#ifndef SEAT_H
#define SEAT_H

class Seat {
private:
    int seatNumber;
    char row;
    bool isBooked;

public:
    Seat(int seatNumber, char row);
    bool reserveSeat();
    void showSeatInfo();
};

#endif