// 59. Program to initialize const data members in constructor.

#include <iostream>
using namespace std;

class Const_init {
    const int x;   // const data member

public:
    // Constructor using initializer list
    Const_init(int a) : x(a) {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Const_init obj(10);
    return 0;
}
