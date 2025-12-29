// 92. Program showing destructor order in inheritance.

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Derived obj;
    return 0;
}
