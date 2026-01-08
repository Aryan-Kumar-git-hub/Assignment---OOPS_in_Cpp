// 104. Program with dynamic method dispatch.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display function of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display function of Derived class" << endl;
    }
};

int main() {
    Base* b;        // base class pointer
    Derived d;      // derived class object

    b = &d;
    b->display();   // dynamic method dispatch or (runtime polymorphism)

    return 0;
}
