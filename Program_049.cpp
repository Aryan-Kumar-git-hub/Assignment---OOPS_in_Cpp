// 49. Program demonstrating nested classes.

#include <iostream>
using namespace std;

class Outer {
public:
    int a;

    class Inner {
    public:
        int b;

        void showInner() {
            cout << "Value of b = " << b << endl;
        }
    };

    void showOuter() {
        cout << "Value of a = " << a << endl;
    }
};

int main() {
    Outer obj1;
    Outer::Inner obj2;

    obj1.a = 10;
    obj2.b = 20;

    obj1.showOuter();
    obj2.showInner();

    return 0;
}
