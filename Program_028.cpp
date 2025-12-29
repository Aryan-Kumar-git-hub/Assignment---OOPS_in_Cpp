// 28. Program using do-while to print number series.

// Even number series using do-whille
#include <iostream>
using namespace std;

int main() {
    int n,i=1,x = 2;

    cout << "Enter length of series :";
    cin >> n;

    cout << "Even Number Series: ";

    do {
        cout << x << " ";
        x += 2;
        i++;
    } while(i <= n);

    return 0;
}
