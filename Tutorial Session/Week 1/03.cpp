#include <iostream>
using namespace std;

int main() {
    int num;
    while (true) {
        cout << "Enter a number: ";
        cin >> num;

        if (num % 2 == 0 && num % 3 == 0) {
            cout << "EXIT" << endl;
            break;
        }

        cout << "Cube of " << num << " is: " << (num * num * num) << endl;
    }
    return 0;
}


/*

Output:

Enter a number: 3
Cube of 3 is: 27
Enter a number: 2
Cube of 2 is: 8

*/