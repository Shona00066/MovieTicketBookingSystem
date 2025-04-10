#include "Theater.h"
#include <iostream>

Theater::Theater(string name, string location) {
    this->name = name;
    this->location = location;
}

void Theater::addMovie(Movie movie) {
    movies.push_back(movie);
}

void Theater::showMovies() {
    cout << "Movies available at " << name << " in " << location << ":";
    for (Movie movie : movies) {
        movie.getDetails();
        cout << "-----------------------\n";
    }
}
