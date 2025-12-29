// 86. Program demonstrating private inheritance.

#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int a;

public:
    void setA(int x) {
        a = x;
    }
};

// Derived class using PRIVATE inheritance
class Derived : private Base {
public:
    void setValue(int x) {
        setA(x);   // accessible inside derived class
    }

    void show() {
        cout << "Value of a = " << a << endl;
    }
};

int main() {
    Derived obj;

    obj.setValue(10);
    obj.show();

    return 0;
}
