// 70. Program using friend to swap private values.

#include <iostream>
using namespace std;

class Swap {
private:
    int x;

public:
    void input() {
        cout << "Enter value: ";
        cin >> x;
    }

    void show() {
        cout << x << endl;
    }

    friend void swapValues(Swap &, Swap &);
};

// Friend function definition
void swapValues(Swap &a, Swap &b) {
    int temp;
    temp = a.x;
    a.x = b.x;
    b.x = temp;
}

int main() {
    Swap obj1, obj2;

    cout << "Enter first value\n";
    obj1.input();

    cout << "Enter second value\n";
    obj2.input();

    cout << "\nBefore swapping:\n";
    obj1.show();
    obj2.show();

    swapValues(obj1, obj2);

    cout << "\nAfter swapping:\n";
    obj1.show();
    obj2.show();

    return 0;
}
