// 2. Program to demonstrate data types and sizes.


#include <iostream>
using namespace std;

int main(){
    int i;
    float f;
    double d;
    char c;
    long int li;
    short int si;
    unsigned int ui;
    bool b;

    cout << "Data Types and Their Sizes:\n\n";

    cout << "int            : " << sizeof(i)  << " bytes\n";
    cout << "float          : " << sizeof(f)  << " bytes\n";
    cout << "double         : " << sizeof(d)  << " bytes\n";
    cout << "char           : " << sizeof(c)  << " byte\n";
    cout << "long int       : " << sizeof(li) << " bytes\n";
    cout << "short int      : " << sizeof(si) << " bytes\n";
    cout << "unsigned int   : " << sizeof(ui) << " bytes\n";
    cout << "bool           : " << sizeof(b)  << " byte\n";

}