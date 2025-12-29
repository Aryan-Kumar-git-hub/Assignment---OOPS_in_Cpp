// 74. Program with constant member function.

#include <iostream>
using namespace std;

class Const_func {
private:
    int x;

public:
    Const_func(int a) {
        x = a;
    }

    // constant member function
    void show() const {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Const_func obj1(20);        // normal object
    const Const_func obj2(30);  // constant object

    obj1.show();   // normal object can call const func
    obj2.show();   // constant object can call const func

    return 0;
}
