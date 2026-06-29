//Write a program to Remove duplicates from array
#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n) {
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        //check if current element has appeared before i.e, duplictes
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        // print only if it is not a duplicate
        if (duplicate == false) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int n;
   cout << "Enter the number of elements: ";
   cin >> n;

   int arr[n];

   cout << "Enter the number of elements: ";
   for (int i = 0; i < n ; i++) {
    cin >> arr[i];
   }

   removeDuplicates(arr, n);

   return 0;
}