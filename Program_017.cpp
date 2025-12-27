// 17. Program Using conditional (ternary) operator.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Ternary operator to find the greater number
    int max = (a > b) ? a : b;

    cout << "Greater number is = " << max << endl;

    return 0;
}
