// 100. Program with pure virtual function & abstract class.

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class
class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Overriding pure virtual function
    void area() {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main() {
    Shape *s;                 // base class pointer
    Rectangle r(10, 5);

    s = &r;
    s->area();                // runtime polymorphism

    return 0;
}
