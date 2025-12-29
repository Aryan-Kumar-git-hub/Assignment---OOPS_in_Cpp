// 80. Program dynamic object creation & deletion using new/delete.

#include <iostream>
using namespace std;

class Dynamic {
private:
    int x;

public:
    Dynamic(int a) {
        x = a;
        cout << "Object created, x = " << x << endl;
    }

    ~Dynamic() {
        cout << "Object destroyed" << endl;
    }

    void show() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Dynamic* obj;          // pointer to object

    obj = new Dynamic(10); // dynamic object creation
    obj->show();

    delete obj;         // dynamic object deletion

    return 0;
}
