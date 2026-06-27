//Write a program to Rotate array right by k positions
#include <iostream>
using namespace std;

void rightRotate(int arr[], int n, int k) {
    k = k % n;     // when k>n

    for  (int i = 0; i < k; i++) {
        int temp = arr[n-1];     //store last element

        // shift elements to the right
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j-1];
        }

        //place last element at the beginning
        arr[0] = temp;
    }
}

int main() {
    int n, arr[n] , k ;

    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of right rotations: ";
    cin >> k;

    rightRotate(arr, n, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}