//Write a program to Check symmetric matrix
#include <iostream>
using namespace std;
void checkSymmetric(int a[][10], int n) {
    bool symmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "Matrix is Symmetric.";
    else
        cout << "Matrix is Not Symmetric.";
}

int main() {
    int n;
    int a[10][10];

    cout << "Enter the size of the square matrix: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    checkSymmetric(a, n);
    return 0;
}