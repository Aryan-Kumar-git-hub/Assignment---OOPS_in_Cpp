// 69. Program showing “friendship is not mutual”.

#include <iostream>
using namespace std;

class ClassB;   

class ClassA {
private:
    int a;

public:
    ClassA() {
        a = 10;
    }

    friend class ClassB;   // ClassB is friend of ClassA
};

class ClassB {
private:
    int b;

public:
    ClassB() {
        b = 20;
    }

    void show(ClassA obj) {
        // Can access private member of ClassA
        cout << "Value of a = " << obj.a << endl;
        cout << "But classA is not friend of classB A" << endl;
    }

};

int main() {
    ClassA objA;
    ClassB objB;

    objB.show(objA);

    return 0;
}
