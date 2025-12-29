// 36. Program for matrix multiplication.


#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Condition for matrix multiplication
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int A[r1][c1], B[r2][c2], Mul[r1][c2];

    cout << "Enter elements of first matrix:\n";
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix with 0
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            Mul[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                Mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant matrix:\n";
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            cout << Mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
