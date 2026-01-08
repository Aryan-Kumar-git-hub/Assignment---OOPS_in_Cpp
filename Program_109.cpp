// 109. Program for static vs dynamic binding.

#include <iostream>
using namespace std;

class Base {
public:
    void show() {   // non-virtual function -- static binding
        cout << "Base class show (Static Binding)" << endl;
    }

    virtual void display() {   // virtual function -- dynamic binding
        cout << "Base class display (Dynamic Binding)" << endl;
    }
};

class Derived : public Base {
public:
    void show() {   // doesn't overrides Base show()
        cout << "Derived class show (Static Binding)" << endl;
    }

    void display() {   // overrides Base display()
        cout << "Derived class display (Dynamic Binding)" << endl;
    }
};

int main() {
    Base* b;
    Derived d;

    b = &d;

    b->show();      // static binding -- Base class function
    b->display();   // dynamic binding -- Derived class function

    return 0;
}
