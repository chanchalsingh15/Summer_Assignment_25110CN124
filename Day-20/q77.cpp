//Write a program to Multiply matrices
#include <iostream>
using namespace std;
void multiplyMatrices(int a[][10], int b[][10], int r1, int c1, int c2) {
    int result[10][10];

    // Initialize the result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++){
            for (int k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    cout << "Product of the matrices:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r1, c1, r2, c2;
    int a[10][10], b[10][10];

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }

    multiplyMatrices(a, b, r1, c1, c2);
    return 0;
}