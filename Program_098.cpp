// 98. Program demonstrating runtime polymorphism.

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
    Base* b;        // base class pointer
    Derived obj;    // derived class object

    b = &obj;       // base pointer pointing o derivted object
    b->show();      // runtime polymorphism

    return 0;
}
