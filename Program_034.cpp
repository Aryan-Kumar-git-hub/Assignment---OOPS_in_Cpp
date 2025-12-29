// 34. Program to reverse an array.


#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array:\n";
    for(i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
