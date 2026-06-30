//Write a program to Add matrices
#include <iostream>
using namespace std;

void addMatrices(int a[][10], int b[][10], int rows, int cols) {
    int sum[10][10];

    // Add corresponding elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

            // Display the result
    cout << "Sum of the matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

 cout << "Enter the number of rows: ";
    cin >> rows;

 cout << "Enter the number of columns: ";
    cin >> cols;

 int a[10][10], b[10][10];

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> b[i][j];
        }
    }

    addMatrices(a, b, rows, cols);

    return 0;
}