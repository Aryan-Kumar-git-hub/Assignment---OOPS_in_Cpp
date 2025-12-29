// 55. Program to demonstrate constructor overloading.

#include <iostream>
using namespace std;

class Overload {
    int a, b;

public:
    // Default constructor
    Overload() {
        a = 0;
        b = 0;
        cout << "Default constructor called" << endl;
    }

    // Constructor with one parameter
    Overload(int x) {
        a = x;
        b = 0;
        cout << "One parameter constructor called" << endl;
    }

    // Constructor with two parameters
    Overload(int x, int y) {
        a = x;
        b = y;
        cout << "Two parameter constructor called" << endl;
    }

    void show() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Overload obj1;          // default constructor
    Overload obj2(10);      // one parameter constructor
    Overload obj3(10, 20);  // two parameter constructor

    obj1.show();
    obj2.show();
    obj3.show();

    return 0;
}
