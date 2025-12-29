//  45. Program to perform arithmetic operations using class.

#include <iostream>
using namespace std;

class Arithmetic {
private:
    int a, b;

public:

    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    // member functions for arithmetic operations
    void add() {
        cout << "Addition = " << (a + b) << endl;
    }

    void subtract() {
        cout << "Subtraction = " << (a - b) << endl;
    }

    void multiply() {
        cout << "Multiplication = " << (a * b) << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division = " << (a / b) << endl;
        else
            cout << "Division by zero is not possible" << endl;
    }
};

int main() {
    Arithmetic obj;  

    obj.input();    
    obj.add();       
    obj.subtract();  
    obj.multiply();  
    obj.divide();    

    return 0;
}
