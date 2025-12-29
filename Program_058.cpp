// 58. Program to dynamically allocate memory in constructor.

#include <iostream>
using namespace std;

class Allocate_memory {
    int *ptr;

public:
    Allocate_memory() {
        ptr = new int;
        *ptr = 10;
        cout << "Memory allocated and value = " << *ptr << " at " << ptr << endl;
    }

};

int main() {
    Allocate_memory obj;
    return 0;
}
