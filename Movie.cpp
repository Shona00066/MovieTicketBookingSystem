#include "Movie.h"
#include <iostream>

Movie::Movie(string title, string genre, int duration, double rating, string language) {
    this->title = title;
    this->genre = genre;
    this->duration = duration;
    this->rating = rating;
    this->language = language;
}

void Movie::getDetails() {
    cout << "Movie: " << title << "\nGenre: " << genre << "\nDuration: " << duration 
         << " min\nRating: " << rating << "\nLanguage: " << language << endl;
}