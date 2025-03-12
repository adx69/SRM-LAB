#include <iostream>
#include <vector>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    double price;
    bool isBooked;

public:
    // Constructor
    MovieTicket(string name, int seat, double cost) 
        : movieName(name), seatNumber(seat), price(cost), isBooked(false) {}

    // Function to book a ticket
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket for " << movieName << " (Seat: " << seatNumber << ") booked successfully!" << endl;
        } else {
            cout << "Seat " << seatNumber << " is already booked!" << endl;
        }
    }

    // Function to cancel a ticket
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket for " << movieName << " (Seat: " << seatNumber << ") cancelled successfully!" << endl;
        } else {
            cout << "Seat " << seatNumber << " is not booked yet!" << endl;
        }
    }

    // Function to display ticket details
    void displayTicketDetails() const {
        cout << "Movie: " << movieName << "\nSeat Number: " << seatNumber
             << "\nPrice: $" << price << "\nStatus: "
             << (isBooked ? "Booked" : "Available") << "\n" << endl;
    }

    // Destructor
    ~MovieTicket() {
        cout << "Ticket object for seat " << seatNumber << " is being deleted." << endl;
    }
};

int main() {
    // Creating multiple ticket objects
    MovieTicket ticket1("Inception", 1, 12.50);
    MovieTicket ticket2("Inception", 2, 12.50);
    MovieTicket ticket3("Interstellar", 3, 15.00);

    // Booking tickets
    ticket1.bookTicket();
    ticket2.bookTicket();

    // Display ticket details
    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();
    ticket3.displayTicketDetails();

    // Attempting to book an already booked ticket
    ticket1.bookTicket();

    // Cancelling a ticket
    ticket1.cancelTicket();
    ticket1.displayTicketDetails();

    // Attempting to cancel an already cancelled ticket
    ticket1.cancelTicket();

    return 0;
}