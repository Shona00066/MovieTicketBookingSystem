#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie {
private:
    string title;
    string genre;
    int duration;
    double rating;
    string language;

public:
    Movie(string title, string genre, int duration, double rating, string language);
    void getDetails();
    string getTitle() { return title; }
};

#endif