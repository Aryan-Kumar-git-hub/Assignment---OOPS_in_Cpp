// 106. Program for virtual function call mechanism.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Show function of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Show function of Derived class" << endl;
    }
};

int main() {
    Base* b;        // pointer to base class
    Derived d;      // object of derived class

    b = &d;
    b->show();      // virtual function call mechanism

    return 0;
}
