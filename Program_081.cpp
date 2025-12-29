// 81. Program for single inheritance.

#include <iostream>
using namespace std;

// Base class
class Parent {
protected:
    int a;

public:
    void setA(int x) {
        a = x;
    }
};

// Derived class
class Child : public Parent {
private:
    int b;

public:
    void setB(int y) {
        b = y;
    }

    void show() {
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
    }
};

int main() {
    Child obj;

    obj.setA(10);   // inherited function
    obj.setB(20);

    obj.show();

    return 0;
}
