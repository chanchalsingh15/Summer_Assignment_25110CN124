//Write a program to Rotate array left by k positions

#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int k){
    k = k % n;                      //when k > n

    for (int i = 0; i < k; i++) {
        int temp = arr[0];
         
        //shift elements to the left
        for (int j = 0; j < n-1; j++) {
            arr[j] = arr[j+1];
        }

        arr[n-1] = temp;            //place first element at the end
    }

}

int main() {
    int n ,arr[n], k;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of left rotations: ";
    cin >> k;

    leftRotate(arr ,n ,k);

    cout << "Array after left rotations: ";
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}   