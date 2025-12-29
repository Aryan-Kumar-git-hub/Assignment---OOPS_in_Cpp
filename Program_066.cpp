// 66. Program to overload operators using friend function.

#include <iostream>
using namespace std;

class Op_overload {
private:
    int x;

public:
    Op_overload(int a = 0) {
        x = a;
    }

    // Friend function declaration
    friend Op_overload operator +(Op_overload n1, Op_overload n2);

    void show() {
        cout << "Value = " << x << endl;
    }
};

// Friend function definition
Op_overload operator +(Op_overload n1, Op_overload n2) {
    Op_overload temp;
    temp.x = n1.x + n2.x;
    return temp;
}

int main() {
    Op_overload n1(10), n2(20), n3;

    n3 = n1 + n2;   // operator + overloaded
    n3.show();

    return 0;
}
