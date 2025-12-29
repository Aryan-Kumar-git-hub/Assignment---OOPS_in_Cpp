// 50. Program to count number of objects using static variable.

#include <iostream>
using namespace std;

class Count {
    static int count;   // static data member

public:
    Count() {
        count++;
    }

    static void showCount() {
        cout << "Number of objects created = " << count;
    }
};

// static member definition
int Count::count = 0;

int main() {
    Count obj1, obj2, obj3;
    Count::showCount();
    return 0;
}
