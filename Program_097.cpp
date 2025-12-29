// 97. Program demonstrating operator overloading.

#include <iostream>
using namespace std;

class Op_overload {
private:
    int x;

public:
    void get(int a) {
        x = a;
    }

    void show() {
        cout << "Value = " << x << endl;
    }

    // Operator overloading
    Op_overload operator + (Op_overload obj) {
        Op_overload temp;
        temp.x = x + obj.x;
        return temp;
    }
};

int main() {
    Op_overload n1, n2, n3;

    n1.get(10);
    n2.get(20);

    n3 = n1 + n2;   // operator + overloaded

    n3.show();

    return 0;
}
