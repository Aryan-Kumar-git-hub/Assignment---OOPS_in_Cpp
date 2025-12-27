// 10. Program to demonstrate type casting.

#include <iostream>
using namespace std;

int main() {
    int a = 15;
    float b = 15.4;
    float result;
    int b_int;

    // Implicit type casting (int --> float)
    result = a + b;
    cout << "\n Implicit Type Casting Result = " << result ;

    // Explicit type casting (float --> int)
    b_int = (int)b;
    cout << "\n Explicit Type Casting Result = " << b_int ;

    return 0;
}
