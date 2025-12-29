// 38. Program to copy string manually.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int i;

    cout << "Enter a string: ";
    getline(cin, str1);

    // Manual string copy
    for (i = 0; str1[i] != '\0'; i++) {
        str2 += str1[i];
    }

    cout << "Original string: " << str1 << endl;
    cout << "Copied string: " << str2;

    return 0;
}
