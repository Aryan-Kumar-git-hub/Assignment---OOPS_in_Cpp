// 46. Program to compare two objects.


#include <iostream>
using namespace std;

class Compare {
private:
    int value;
public:
    void getData() {
        cout << "Enter value: ";
        cin >> value;
    }

    void compare(Compare obj) {
        if (value > obj.value)
            cout << "First object is greater";
        else if (value < obj.value)
            cout << "Second object is greater";
        else
            cout << "Both objects are equal";
    }
};

int main() {
    Compare obj1, obj2;

    cout << "value for first object\n";
    obj1.getData();

    cout << "value for second object\n";
    obj2.getData();

    obj1.compare(obj2);

    return 0;
}
