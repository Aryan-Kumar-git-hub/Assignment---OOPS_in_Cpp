// 16. Program demonstrating increment/decrement.

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    cout << "\nInitial value of a = " << a << endl;

    // Pre-increment
    cout << "Pre-increment (++a) = " << ++a << endl;
    cout << "Value of a after pre-increment = " << a << endl;

    // Post-increment
    cout << "Post-increment (a++) = " << a++ << endl;
    cout << "Value of a after post-increment = " << a << endl;

    // Pre-decrement
    cout << "Pre-decrement (--a) = " << --a << endl;
    cout << "Value of a after pre-decrement = " << a << endl;

    // Post-decrement
    cout << "Post-decrement (a--) = " << a-- << endl;
    cout << "Value of a after post-decrement = " << a << endl;

    return 0;
}
