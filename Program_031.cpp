// 31. Program to input and display array elements.


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

    cout << "Array elements are:\n";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
