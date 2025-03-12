#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        bookID = 0;
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Book(int id, string t, string a, double p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    // Function to display book information
    void displayBookInfo() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    // Creating book objects
    Book book1; // Using default constructor
    Book book2(101, "The Catcher in the Rye", "J.D. Salinger", 9.99);
    Book book3(102, "1984", "George Orwell", 8.49);
    Book book4(103, "To Kill a Mockingbird", "Harper Lee", 10.99);

    // Displaying book information
    cout << "Library Books:\n";
    book1.displayBookInfo();
    book2.displayBookInfo();
    book3.displayBookInfo();
    book4.displayBookInfo();

    return 0;
}
