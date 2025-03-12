#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    double price;
    int quantity;

public:
    // Default constructor
    Product() : productID(0), productName("Unknown"), price(0.0), quantity(0) {}

    // Parameterized constructor
    Product(int id, string name, double p, int qty) : productID(id), productName(name), price(p), quantity(qty) {}

    // Function to calculate total price
    double calculateTotalPrice() {
        return price * quantity;
    }

    // Function to display product details
    void displayProduct() {
        cout << "Product ID: " << productID << "\n";
        cout << "Product Name: " << productName << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Quantity: " << quantity << "\n";
        cout << "Total Price: $" << calculateTotalPrice() << "\n\n";
    }

    // Destructor
    ~Product() {
        cout << "Product " << productName << " is removed from memory." << endl;
    }
};

// Function to display all products in the cart
void displayCart(Product cart[], int size) {
    cout << "\nProducts in the cart:\n";
    for (int i = 0; i < size; i++) {
        cart[i].displayProduct();
    }
}

int main() {
    // Creating an array of Product objects
    Product cart[] = {
        Product(101, "Laptop", 799.99, 1),
        Product(102, "Smartphone", 499.99, 2),
        Product(103, "Headphones", 89.99, 3)
    };

    int cartSize = sizeof(cart) / sizeof(cart[0]);
    displayCart(cart, cartSize);
    
    return 0;
}
