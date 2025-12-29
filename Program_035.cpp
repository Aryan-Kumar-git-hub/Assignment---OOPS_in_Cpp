// 35. Program for matrix addition

#include <iostream>
using namespace std;

int main() {
    int r, c, i, j;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int A[r][c], B[r][c], Sum[r][c];

    cout << "Enter elements of first matrix:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix Addition
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
