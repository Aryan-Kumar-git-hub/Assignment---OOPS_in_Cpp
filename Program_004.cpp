// 4. Program to swap two numbers without a third variable.

#include <iostream>
using namespace std;

int main(){
    int a=10, b=20;
    cout << "Initial values of";
    cout << "\na="<<a;
    cout << "\nb="<<b;
    
    a=a+b;
    b=a-b;
    a=a-b;

    cout << "\nvalues after swapping";
    cout << "\na="<<a;
    cout << "\nb="<<b;
}