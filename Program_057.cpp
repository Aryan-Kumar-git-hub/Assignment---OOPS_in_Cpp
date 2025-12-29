// 57. Program to show order of constructor execution.

#include <iostream>
using namespace std;

class Order {
public:
    Order(int x) {
        cout << "Constructor " << x << " called" << endl;
    }
    Order(int x, int y) {
        cout << "Constructor " << x << " called" << endl;
    }
    Order(int x, int y, int z) {
        cout << "Constructor " << x << " called" << endl;
    }
};

int main() {
    Order obj1(1);
    Order obj2(2, 0);
    Order obj3(3, 0, 0);
    return 0;
}
