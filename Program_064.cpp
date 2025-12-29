// 64. Program with two classes and a common friend function.

#include <iostream>
using namespace std;

class ClassB;   // forward declaration

class ClassA {
private:
    int a;

public:
    ClassA(int x) {
        a = x;
    }

    friend void showData(ClassA, ClassB);  // common friend function
};

class ClassB {
private:
    int b;

public:
    ClassB(int y) {
        b = y;
    }

    friend void showData(ClassA, ClassB);  // common friend function
};

// Defining of common friend function
void showData(ClassA obj1, ClassB obj2) {
    cout << "Value of a = " << obj1.a << endl;
    cout << "Value of b = " << obj2.b << endl;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    showData(objA, objB);

    return 0;
}
