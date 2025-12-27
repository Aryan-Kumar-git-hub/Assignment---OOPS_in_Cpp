// 23. Program using nested if.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) {
        if (num == 0) {
            cout << "The number is Zero";
        } else {
            cout << "The number is Positive";
        }
    } else {
        cout << "The number is Negative";
    }

    return 0;
}
