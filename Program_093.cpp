// 93. Program for virtual base class.

#include <iostream>
using namespace std;

// Base class
class A {
protected:
    int x;

public:
    void setX(int a) {
        x = a;
    }
};

// B virtually inherits A
class B : virtual public A {
};

// C virtually inherits A
class C : virtual public A {
};

// D inherits from B and C
class D : public B, public C {
public:
    void show() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    D obj;
    obj.setX(10);
    obj.show();

    return 0;
}
