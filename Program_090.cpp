// 90. Program resolving ambiguity using scope resolution operator.

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A show()" << endl;
    }
};

class B {
public:
    void show() {
        cout << "Class B show()" << endl;
    }
};

class C : public A, public B {
};

int main() {
    C obj;

    obj.A::show();   // calls show() of class A
    obj.B::show();   // calls show() of class B

    return 0;
}
