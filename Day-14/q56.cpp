//Write a program to Find duplicates in array.
#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    cout << "Duplicate elements are: ";
    for (int i = 0 ; i < n; i++) {
        bool printed = false;

        //check if elemnt is already printed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                printed = true;
                break;
            }
        }

        if (printed)
        continue;

     //check for duplicate
     for (int j = i+1; j < n; j++) {
        if (arr[i] == arr[j]) {
            cout << arr[i] << " ";
            break;
        }
      }
    }

}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr , size);
    return 0;
} 