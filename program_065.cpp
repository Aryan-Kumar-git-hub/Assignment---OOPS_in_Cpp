// 65. Program with friend class.

#include <iostream>
using namespace std;

class ClassB;   // forward declaration

class ClassA {
private:
    int x;

public:
    ClassA(int a) {
        x = a;
    }

    friend class ClassB;   // ClassB is a friend class
};

class ClassB {
public:
    void show(ClassA obj) {
        cout << "Private data of ClassA = " << obj.x << endl;
    }
};

int main() {
    ClassA objA(100);
    ClassB objB;

    objB.show(objA);

    return 0;
}
