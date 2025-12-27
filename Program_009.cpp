// 9. Program to compute area of circle, triangle, rectangle.

#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, base, height, length, breadth, area;

    cout << "Choose the shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Triangle\n";
    cout << "3. Rectangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "\nEnter radius: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            cout << "\nArea of Circle = " << area;
            break;

        case 2:
            cout << "Enter height: ";
            cin >> height;
            cout << "\nEnter base: ";
            cin >> base ;
            area = (base * height) / 2;
            cout << "\nArea of Triangle = " << area;
            break;

        case 3:
            cout << "\nEnter length : ";
            cin >> length ;
            cout << "\nEnter breadth: ";
            cin >> breadth;
            area = length * breadth;
            cout << "\nArea of Rectangle = " << area;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
