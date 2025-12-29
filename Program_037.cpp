// 37. Program for string length without using library function.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int length = 0;

    cout << "Enter a string: ";
    getline(cin, str);  // library fumction used only for input

    // finding length without using length() or size()
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "Length of string = " << length;
    
    return 0;
}


