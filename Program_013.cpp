// 13. Program to demonstrate logical operators.

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "a="<<a<< endl;
    cout << "b="<<b<< endl;

    // Logical AND operator
    if (a > 5 && b > 15)
        cout << "Logical AND(&&) condition is TRUE" << endl;
    else
        cout << "Logical AND(&&) condition is FALSE" << endl;

    // Logical OR operator
    if (a > 15 || b > 15)
        cout << "Logical OR(||) condition is TRUE" << endl;
    else
        cout << "Logical OR(||) condition is FALSE" << endl;

    // Logical NOT operator
    if (!(a > b))
        cout << "Logical NOT(!) condition is TRUE" << endl;
    else
        cout << "Logical NOT(!) condition is FALSE" << endl;

    return 0;
}
