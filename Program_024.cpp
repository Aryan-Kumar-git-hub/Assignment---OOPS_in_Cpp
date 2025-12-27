// 24. Program for grading system using if-else.

#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks (0 - 100): ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A";
    }
    else if (marks >= 75) {
        cout << "Grade: B";
    }
    else if (marks >= 60) {
        cout << "Grade: C";
    }
    else if (marks >= 40) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: F (Fail)";
    }

    return 0;
}
