// 110. Program showing implications of polymorphism.

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* s;      // base class pointer

    Circle c;
    Rectangle r;

    s = &c;
    s->draw();     // calls Circle's draw()

    s = &r;
    s->draw();     // calls Rectangle's draw()

    return 0;
}
