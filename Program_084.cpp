// 84. Program for hierarchical inheritance.

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

// First derived class
class Child1 : public Parent {
public:
    void show1() {
        cout << "Child1 accessing a = " << a << endl;
    }
};

// Second derived class
class Child2 : public Parent {
public:
    void show2() {
        cout << "Child2 accessing a = " << a << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;

    obj1.setA(10);
    obj2.setA(20);

    obj1.show1();
    obj2.show2();

    return 0;
}
