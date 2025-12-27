// 18. Program to evaluate an algebraic expression.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int z;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    // Algebraic expression x = (a+b)^2
    z = (a + b) * (a + b);

    cout << "Value of (a + b)^2 = " << z << endl;

    return 0;
}
