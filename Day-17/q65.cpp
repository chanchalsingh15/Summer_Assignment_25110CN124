//Write a program to Merge arrays
#include <iostream>
using namespace std;
void mergeArrays(int arr1[], int n1, int arr2[], int n2) {
    int merged[n1+n2];

    //copy first array
    for (int i = 0 ; i < n1; i++) {
        merged[i] = arr1[i];
    }

    //copy second array
    for (int i = 0; i < n2; i++) {
        merged[n1+i] = arr2[i];          //n1+i is used to prevent overite of arr2 on arr1
    }

    //display merged array
    cout << "Merged Array: ";
    for (int i = 0; i < n1+n2; i++) {
        cout << merged[i] << " ";
    }
}

int main() {
    int n1, n2;

    cout << "Enter the size of array1: ";
    cin >> n1;

   int arr1[n1];
    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    mergeArrays(arr1, n1, arr2, n2);
    return 0;
}