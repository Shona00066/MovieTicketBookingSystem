#include "Admin.h"
#include "Customer.h"
#include "Movie.h"
#include "Theater.h"
#include "Showtime.h"

int main() {
    Admin admin("Alice", "alice@example.com", "admin123");
    Customer customer("Bob", "bob@example.com", "password123");

    Movie movie1("Inception", "Sci-Fi", 148, 8.8, "English");
    Theater theater("Mega Cinema", "Tashkent");

    Showtime show1(movie1, theater, "18:00", 30);

    admin.login();
    admin.addMovie();
    admin.scheduleShowtime();
    admin.logout();

    customer.login();
    customer.selectMovie();
    customer.bookTicket();
    customer.makePayment();
    customer.logout();

    movie1.getDetails();
    theater.addMovie(movie1);
    theater.showMovies();

    show1.displaySeats();
    show1.bookSeat(5);
    show1.displaySeats();

    return 0;
}