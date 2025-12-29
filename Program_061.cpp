// 61. Program demonstrating this pointer.

#include <iostream>
using namespace std;

class This_point {
private:
    int x;

public:
    void set(int x) {
        this->x = x;   // this pointer refers to current object
    }

    void show() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    This_point obj;
    obj.set(10);
    obj.show();

    return 0;
}
