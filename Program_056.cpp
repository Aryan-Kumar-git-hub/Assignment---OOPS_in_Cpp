// 56. Program with destructor showing object destruction.

#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Object created" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Object destroyed" << endl;
    }
};

int main() {
    Demo obj1;
    {
        Demo obj2;
    }   // obj2 destroyed here

    cout << "End of main" << endl;
    return 0;
}
