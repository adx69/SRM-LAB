#include <iostream>
#include <string>
using namespace std;

class Car {
    string model;
    double pricePerDay;
    bool available;

public:
    // Default Constructor
    Car() : model("Unknown"), pricePerDay(0.0), available(true) {}

    // Parameterized Constructor
    Car(string m, double price, bool avail) : model(m), pricePerDay(price), available(avail) {}

    // Copy Constructor
    Car(const Car& c) : model(c.model), pricePerDay(c.pricePerDay), available(c.available) {}

    // Function Overloading for booking
    double book(int days) {
        return days * pricePerDay;
    }

    double book(int days, double discount) {
        return days * pricePerDay * (1 - discount / 100);
    }

    double book(int days, double discount, double insurance) {
        return days * pricePerDay * (1 - discount / 100) + insurance;
    }

    // Operator Overloading
    double operator+(const Car& c) {
        return this->pricePerDay + c.pricePerDay;
    }

    bool operator>(const Car& c) {
        return this->pricePerDay > c.pricePerDay;
    }

    // Display function
    void display() {
        cout << "Model: " << model << ", Price per day: $" << pricePerDay 
             << ", Availability: " << (available ? "Yes" : "No") << endl;
    }
};

int main() {
    Car car1("Etron", 50, true);
    Car car2("Bugatti", 100, false);
    
    // Display car details
    car1.display();
    car2.display();

    // Booking scenarios
    cout << "Cost for 5 days: $" << car1.book(5) << endl;
    cout << "Cost for 5 days with 10% discount: $" << car1.book(5, 10) << endl;
    cout << "Cost for 5 days with 10% discount and $20 insurance: $" << car1.book(5, 10, 20) << endl;

    // Operator Overloading Usage
    cout << "Total price per day of both cars: $" << (car1 + car2) << endl;
    cout << (car1 > car2 ? "Car 1 expensive" : "Car 2 expensive") << endl;

    return 0;
}
