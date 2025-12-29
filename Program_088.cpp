// 88. Program to access base class members using derived class.

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

// Derived class
class Derived : public Base {
public:
    void show() {
        cout << "Value of a = " << a << endl; 
    }
};

int main() {
    Derived obj;

    obj.setA(10);   // accessing base class function using derived object
    obj.show();

    return 0;
}
