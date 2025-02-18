#include <iostream>
using namespace std;

int main() {
    int num1, den1, num2, den2;
    char slash;

    cout << "Enter first fraction (a/b): ";
    cin >> num1 >> slash >> den1;

    cout << "Enter second fraction (c/d): ";
    cin >> num2 >> slash >> den2;

    cout << "Product = " << (num1 * num2) << "/" << (den1 * den2) << endl;
    return 0;
}

/*

Output:

Enter first fraction (a/b): 1/2
Enter second fraction (c/d): 2/5
Product = 2/10

*/