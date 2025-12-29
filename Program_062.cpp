// 62. Program to differentiate local & member variables using this.

#include <iostream>
using namespace std;

class This_diff {
private:
    int a;   // member variable

public:
    void set(int a) {   // local variable
        this->a = a;    // points to member variable
    }

    void show() {
        cout << "Value of member variable a = " << a << endl;
    }
};

int main() {
    This_diff obj;
    obj.set(25);
    obj.show();

    return 0;
}
