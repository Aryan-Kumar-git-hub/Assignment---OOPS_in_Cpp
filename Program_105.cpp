// 105. Program with pointer to base class calling derived function.

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

    b = &d;         // base pointer points to derived object
    b->show();      // calls derived class function

    return 0;
}
