// 26. Program using for loop to print series.

// To print Fibonacci series using for loop
#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Enter length of series: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
