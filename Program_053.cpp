// 53. Program with multiple constructors.

#include <iostream>
using namespace std;

class Multi_construct {
public:
    // Default constructor
    Multi_construct() {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Multi_construct(int a) {
        cout << "Parameterized constructor called" << endl;
        cout << "Value of a = " << a << endl;
    }
};

int main() {
    Multi_construct obj1;        // calls default constructor
    Multi_construct obj2(10);    // calls parameterized constructor
    return 0;
}
