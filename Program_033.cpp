// 33. Program to find second-largest element.

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

    int largest = arr[0];
    int secondLargest = arr[0];
    
    // Finding largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    if(largest==arr[0]){
        secondLargest = arr[1];
    }
    
    // Finding second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element = " << secondLargest;

    return 0;
}