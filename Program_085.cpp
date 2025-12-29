// 85. Program for hybrid inheritance.

#include <iostream>
using namespace std;

// Base class
class A {
protected:
    int a;

public:
    void setA(int x) {
        a = x;
    }
};

// Derived from A (Multilevel)
class B : public A {
protected:
    int b;

public:
    void setB(int y) {
        b = y;
    }
};

// Derived from B (Hierarchical)
class C : public B {
public:
    void showC() {
        cout << "Class C values:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

// Another derived from B (Hierarchical)
class D : public B {
public:
    void showD() {
        cout << "Class D values:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    C obj1;
    D obj2;

    obj1.setA(10);
    obj1.setB(20);

    obj2.setA(30);
    obj2.setB(40);

    obj1.showC();
    obj2.showD();

    return 0;
}

