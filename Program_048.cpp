// 48. Program to calculate area using class object.

#include <iostream>
using namespace std;

class Area {
private:
    int length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    void calculateArea() {
        int area = length * breadth;
        cout << "Area of rectangle = " << area;
    }
};

int main() {
    Area obj;
    obj.getData();
    obj.calculateArea();
    return 0;
}
