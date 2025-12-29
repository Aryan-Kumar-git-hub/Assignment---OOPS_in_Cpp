// 54. Program with copy constructor.

#include <iostream>
using namespace std;

class Copy_construct {
    int x;

public:
    // Parameterized constructor
    Copy_construct(int a) {
        x = a;
    }

    // Copy constructor
    Copy_construct(Copy_construct &obj) {
        x = obj.x;
        cout << "Copy constructor called" << endl;
        cout << "Value of (copy)x = " << x << endl;
    }

    void show() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Copy_construct obj1(10);   // normal object
    Copy_construct obj2(obj1); // copy constructor invoked

    obj1.show();

    return 0;
}
