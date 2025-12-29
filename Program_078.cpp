// 78. Program implementing ADT Polynomial.

#include <iostream>
using namespace std;

class Polynomial {
private:
    int coeff[10];
    int exp[10];
    int n;   // number of terms

public:
    // Input polynomial
    void read() {
        cout << "Enter number of terms: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Enter coefficient of term " << i + 1 << ": ";
            cin >> coeff[i];
            cout << "Enter exponent of term " << i + 1 << ": ";
            cin >> exp[i];
        }
    }

    // Display polynomial
    void display() {
        cout << "Polynomial: ";
        for (int i = 0; i < n; i++) {
            cout << coeff[i] << "x^" << exp[i];
            if (i != n - 1)
                cout << " + ";
        }
        cout << endl;
    }
};

int main() {
    Polynomial p;

    p.read();      
    p.display();   

    return 0;
}
