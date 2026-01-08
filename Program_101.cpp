// 101. Program showing late binding.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "This is Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "This is Derived class display function" << endl;
    }
};

int main() {
    Base* b;      // base class pointer
    Derived d;    // derived class object

    b = &d;
    b->display(); // late binding happens here

    return 0;
}
