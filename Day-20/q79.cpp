//Write a program to Find row-wise sum
#include <iostream>
using namespace std;
void rowSum(int a[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++){
            sum = sum + a[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = " << sum << endl;
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

 rowSum(a, rows, cols);
 return 0;
}