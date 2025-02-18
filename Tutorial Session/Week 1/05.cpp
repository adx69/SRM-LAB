#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(10) << fixed << setprecision(3) << 45.6789 << endl;   // a
    cout << scientific << setprecision(6) << 0.00034567 << endl;      // b
    cout << hex << uppercase << 255 << endl;                          // c
    cout << fixed << setprecision(4) << 987.654321 << endl;           // d
    cout << scientific << setprecision(4) << -123.456 << endl;        // e

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