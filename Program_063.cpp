// 63. Program with friend function accessing private data.

#include <iostream>
using namespace std;

class Friend {
private:
    int x;

public:
    Friend(int a) {
        x = a;
    }

    friend void showData(Friend obj);  // friend function declaration
};

// Friend function defined
void showData(Friend obj) {
    cout << "Value of private data x = " << obj.x << endl;
}

int main() {
    Friend obj(50);
    showData(obj);

    return 0;
}
