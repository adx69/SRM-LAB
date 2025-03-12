#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading << operator
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1(3, 4);
    cout << c1;  // Expected Output: 3 + 4i
    return 0;
}
