// 32. Program to find largest element in array.


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

    int max = arr[0];  

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Largest element = " << max;

    return 0;
}
