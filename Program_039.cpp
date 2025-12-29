// 39. Program demonstrating pointers basic operations.


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;

    p = &a;   // pointer stores address of variable

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Value stored in pointer p = " << p << endl;
    cout << "Value of a pointed by p = " << *p << endl;

    // changing value of a using pointer
    *p = 20;

    cout << "New value of a after modification = " << a << endl;

    return 0;
}
