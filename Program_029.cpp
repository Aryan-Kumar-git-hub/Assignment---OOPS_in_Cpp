// 29. Program demonstrating break and continue.


#include <iostream>
using namespace std;

int main() {
    int i;

    cout << "Using break :\n";
    for(i = 1; i <= 10; i++) {
        if(i == 6) {
            break;   // exits the loop using break
        }
        cout << i << " ";
    }

    cout << "\nUsing continue :\n";
    for(i = 1; i <= 10; i++) {
        if(i == 6) {
            continue;  // skips current iteration using continue
        }
        cout << i << " ";
    }

    return 0;
}
