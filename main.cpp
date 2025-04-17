#include <iostream>
#include <string>
#include "Admin.h"
#include "Customer.h"
#include "Movie.h"
#include "Theater.h"
#include "Showtime.h"
#include "Seat.h"
#include "Ticket.h"
#include "Payment.h"

using namespace std;

int main() {
    cout << "=== Welcome to Movie Ticket Booking System ===" << endl;

    string userType;
    cout << "Are you logging in as 'admin' or 'customer'? ";
    cin >> userType;

    string name, email, password;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your email: ";
    getline(cin, email);
    cout << "Enter your password: ";
    getline(cin, password);

    if (userType == "admin") {
        Admin admin(name, email, password);
        admin.login();

        cout << "Adding a movie..." << endl;
        string title, genre, language;
        int duration;
        double rating;

        cout << "Enter movie title: ";
        getline(cin, title);
        cout << "Enter genre: ";
        getline(cin, genre);
        cout << "Enter duration (minutes): ";
        cin >> duration;
        cout << "Enter rating (out of 10): ";
        cin >> rating;
        cin.ignore();
        cout << "Enter language: ";
        getline(cin, language);

        Movie movie(title, genre, duration, rating, language);
        movie.getDetails();

        admin.addMovie();
        admin.scheduleShowtime();
        admin.logout();

    } else if (userType == "customer") {
        Customer customer(name, email, password);
        customer.login();

        cout << "Available movie: Inception (preloaded for demo)" << endl;
        Movie movie("Inception", "Sci-Fi", 148, 8.8, "English");

        cout << "Choose theater name: ";
        string theaterName;
        cin.ignore();
        getline(cin, theaterName);

        cout << "Enter theater location: ";
        string location;
        getline(cin, location);

        Theater theater(theaterName, location);
        theater.addMovie(movie);

        cout << "Enter showtime (e.g. 18:00): ";
        string showtime;
        getline(cin, showtime);

        Showtime show(movie, theater, showtime, 30);
        show.displaySeats();

        int seatNumber;
        cout << "Select seat number (1-30): ";
        cin >> seatNumber;
        show.bookSeat(seatNumber - 1);

        Seat seat(seatNumber, 'A');

        Ticket ticket(101, customer, show, seat, 10.50);
        ticket.printTicket();

        Payment<string> payment(301, 10.50, "Credit Card");
        payment.processPayment();

        customer.logout();
    } else {
        cout << "Invalid user type. Please restart the program." << endl;
    }

    cout << "=== Thank you for using the system! ===" << endl;
    return 0;
