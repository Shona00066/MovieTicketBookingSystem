#ifndef SHOWTIME_H
#define SHOWTIME_H

#include <string>
#include <vector>
#include "Movie.h"
#include "Theater.h"

using namespace std;

class Showtime {
private:
    Movie movie;
    Theater theater;
    string time;
    vector<bool> availableSeats;

public:
    Showtime(Movie movie, Theater theater, string time, int seatCount);
    void displaySeats();
    bool bookSeat(int seatNumber);
    Movie getMovie() { return movie; }
    Theater getTheater() { return theater; }
    string getTime() { return time; }
};

#endif