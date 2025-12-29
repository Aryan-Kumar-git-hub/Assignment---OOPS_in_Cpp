// 

#include <iostream>
using namespace std;

class ClassB;   

class ClassA {
private:
    int a;

public:
    void input() {
        cout << "Enter value for ClassA: ";
        cin >> a;
    }

    friend void compare(ClassA, ClassB);
};

class ClassB {
private:
    int b;

public:
    void input() {
        cout << "Enter value for ClassB: ";
        cin >> b;
    }

    friend void compare(ClassA, ClassB);
};

// Friend function defined
void compare(ClassA obj1, ClassB obj2) {
    if (obj1.a > obj2.b)
        cout << "ClassA has greater value" << endl;
    else if (obj1.a < obj2.b)
        cout << "ClassB has greater value" << endl;
    else
        cout << "Both values are equal" << endl;
}

int main() {
    ClassA objA;
    ClassB objB;

    objA.input();   
    objB.input();   

    compare(objA, objB);

    return 0;
}
