// 19. Program to check leap year.

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Leap year condition
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year";
    } else {
        cout << year << " is NOT a Leap Year";
    }

    return 0;
}
