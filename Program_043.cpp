// 43. Program to demonstrate class member functions.


#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    // member function to take input
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    // member function to calculate area
    int area() {
        return length * breadth;
    }

    // member function to display result
    void display() {
        cout << "Area of rectangle = " << area() << endl;
    }
};

int main() {
    Rectangle r;   
    r.input();     
    r.display();   

    return 0;
}
