// 47. Program to find largest of two numbers using class.

#include <iostream>
using namespace std;

class Largest {
private:
    int a, b;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void showLargest() {
        if (a > b)
            cout << "Largest number = " << a;
        else if (b > a)
            cout << "Largest number = " << b;
        else
            cout << "Both numbers are equal";
    }
};

int main() {
    Largest obj;
    obj.getData();
    obj.showLargest();
    return 0;
}
