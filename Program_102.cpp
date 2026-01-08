// 102. Program with virtual destructor.

#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {   // virtual destructor
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Base* b = new Derived();  // base pointer to derived object
    delete b;                // invokes virtual destructor
    return 0;
}
