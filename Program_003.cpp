// 3. Program to swap two numbers using a third variable.

#include <iostream>
using namespace std;

int main(){
    int a=10, b=20, c;
    cout << "Initial values of";
    cout << "\na="<<a;
    cout << "\nb="<<b;
    
    c=a;
    a=b;
    b=c;

    cout << "\nvalues after swapping";
    cout << "\na="<<a;
    cout << "\nb="<<b;
}