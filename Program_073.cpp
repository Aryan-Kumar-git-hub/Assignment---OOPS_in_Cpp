// 73. Program with constant object.

#include <iostream>
using namespace std;

class Const_obj {
private:
    int x;

public:
    Const_obj(int a) {
        x = a;
    }

    // constant member function
    void show() const {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    const Const_obj obj(10);   // constant object

    obj.show();   // const function

    return 0;
}
