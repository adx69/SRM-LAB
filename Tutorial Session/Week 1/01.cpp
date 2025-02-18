#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int product = a * b;
    cout << "Product - " << product << endl;

    // Counting digits manually
    int count = 0, temp = product;
    if (temp == 0) count = 1; // Special case for 0
    while (temp) {
        count++;
        temp /= 10;
    }

    cout << "Count of digits - " << count << endl;
    return 0;
}

/* 

Output

Enter two numbers: 15 20
Product - 300
Count of digits - 3

*/