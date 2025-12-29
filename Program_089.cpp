// 89. Program showing ambiguity in multiple inheritance.

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

// Derived class
class C : public A, public B {
};

int main() {
    C obj;
    // obj.show();   // Ambiguous call
    cout << "obj.show() doesnt work as it is an ambiguous call" << endl;

    return 0;
}
