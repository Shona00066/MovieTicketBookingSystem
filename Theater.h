#ifndef THEATER_H
#define THEATER_H

#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class Theater {
private:
    string name;
    string location;
    vector<Movie> movies;

public:
    Theater(string name, string location);
    void addMovie(Movie movie);
    void showMovies();
    string getName() { return name; }
};

#endif