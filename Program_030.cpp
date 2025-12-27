// 30. Program to show use of goto.

// doing iteration using goto
#include <iostream>
using namespace std;

int main() {
    int i = 1;

start:
    cout << i << " ";
    i++;

    if(i <= 10)
        goto start;

    return 0;
}
