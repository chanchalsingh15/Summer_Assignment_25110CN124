//Write a program to Find diagonal sum
#include <iostream>
using namespace std;

void diagonalSum(int a[][10], int n) {
    int sum = 0;

    // Add diagonal elements
    for (int i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }
    cout << "Sum of diagonal elements = " << sum << endl;
}

int main() {
    int n;
    int a[10][10];

 cout << "Enter the size of the square matrix: ";
 cin >> n;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

diagonalSum(a, n);
    return 0;
}