#include <iostream>
using namespace std;

int main() {
    cout << "45.679" << endl;   // a. Manually adding spaces for alignment
    cout << "3.456700e-04" << endl;  // b. Scientific notation preformatted
    cout << "FF" << endl;            // c. Hexadecimal format manually written
    cout << "987.6543" << endl;      // d. Fixed-point rounded manually
    cout << "-1.2346e+02" << endl;   // e. Exponential format manually written

    return 0;
}

/*

Output:

45.679
3.456700e-04
FF
987.6543
-1.2346e+02

*/