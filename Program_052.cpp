// 52. Program with parameterized constructor.

#include <iostream>
using namespace std;

class Para_construct {
public:
    // Parameterized constructor
    Para_construct(int a) {
        cout << "This is a parameterized constructor" << endl;
        cout << "a = " << a;
    }
};

int main() {
    int a=20;
    Para_construct obj(a);   
    return 0;
}