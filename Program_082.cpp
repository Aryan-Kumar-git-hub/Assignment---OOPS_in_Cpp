// 82. Program for multilevel inheritance.

#include <iostream>
using namespace std;

// Base class
class Grandparent {
protected:
    int a;

public:
    void setA(int x) {
        a = x;
    }
};

// Derived class from Grandparent
class Parent : public Grandparent {
protected:
    int b;

public:
    void setB(int y) {
        b = y;
    }
};

// Derived class from Parent
class Child : public Parent {
private:
    int c;

public:
    void setC(int z) {
        c = z;
    }

    void show() {
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
        cout << "Value of c = " << c << endl;
    }
};

int main() {
    Child obj;

    obj.setA(10);   // from Grandparent
    obj.setB(20);   // from Parent
    obj.setC(30);   // from Child

    obj.show();

    return 0;
}
