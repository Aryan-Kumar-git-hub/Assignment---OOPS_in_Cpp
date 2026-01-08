// 107. Program demonstrating abstract shape class.

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // pure virtual function
    virtual void area() = 0;
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void area() {
        int l = 10, b = 5;
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void area() {
        int r = 7;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main() {
    Shape* s;          // base class pointer

    Rectangle r;
    Circle c;

    s = &r;
    s->area();         // calls Rectangle area()

    s = &c;
    s->area();         // calls Circle area()

    return 0;
}
