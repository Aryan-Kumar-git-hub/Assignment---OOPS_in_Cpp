// 99. Program with virtual function.

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void show() {
        cout << "This is Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() {
        cout << "This is Derived class show function" << endl;
    }
};

int main() {
    Base *b;
    Derived obj;

    b = &obj;       // base class pointer to derived object
    b->show();   // calls derived class function

    return 0;
}
