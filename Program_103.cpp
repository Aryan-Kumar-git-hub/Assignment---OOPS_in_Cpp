// 103. Program overriding base class function.

#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {   // overrides Base class function
        cout << "This is Derived class show function" << endl;
    }
};

int main() {
    Derived d;
    d.show();   // derived class show function called
    return 0;
}

