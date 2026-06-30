//Write a program to Find column-wise sum
#include <iostream>
using namespace std;
void columnSum(int a[][10], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum = sum + a[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }
}

int main() {
    int rows, cols;
    int a[10][10];

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    columnSum(a, rows, cols);
    return 0;
}