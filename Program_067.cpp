//

#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Friend function declaration
    friend Complex operator +(Complex c1, Complex c2);

    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition
Complex operator +(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3, 4), c2(5, 6), c3;

    c3 = c1 + c2;   // calls operator+
    c3.show();

    return 0;
}
