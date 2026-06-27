//Write a program to Move zeroes to end
#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int index = 0;

    //move all non zero elements to the front
    for (int i = 0; i < n; i++){
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    //fill remaining positions with 0
    while (index < n) {
        arr[index] = 0;
        index++;
    }
}

int main() {
    int n, arr[n];

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeroes(arr, n);

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}