// 96. Program demonstrating function overloading.

#include <iostream>
using namespace std;

class Calculate {
public:
    // Function with two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function with three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function with float values
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculate obj;

    cout << "Sum of 2 integers: " << obj.add(10, 20) << endl;
    cout << "Sum of 3 integers: " << obj.add(10, 20, 30) << endl;
    cout << "Sum of 2 floats: " << obj.add(10.5f, 20.f) << endl;

    return 0;
}
