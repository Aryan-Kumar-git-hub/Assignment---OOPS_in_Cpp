// 108. Program polymorphic array of objects.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shapes[2];   // polymorphic array of base class pointers

    Circle c;
    Rectangle r;

    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();   // runtime polymorphism
    }

    return 0;
}
