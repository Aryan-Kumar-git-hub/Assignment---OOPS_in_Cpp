// 83. Program for multiple inheritance.

#include <iostream>
using namespace std;

// First base class
class Parent1 {
protected:
    int a;

public:
    void setA(int x) {
        a = x;
    }
};

// Second base class
class Parent2 {
protected:
    int b;

public:
    void setB(int y) {
        b = y;
    }
};

// Derived class inheriting from both Parent1 and Parent2
class Child : public Parent1, public Parent2 {
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

    obj.setA(10);   // from Parent1
    obj.setB(20);   // from Parent2
    obj.setC(30);   // from Child

    obj.show();

    return 0;
}
