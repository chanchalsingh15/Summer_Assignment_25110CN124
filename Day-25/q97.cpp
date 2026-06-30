// Write a program to Merge two sorted arrays
#include <iostream>
using namespace std;
void mergeArrays(int arr1[], int n1, int arr2[], int n2) {
    int merged[100];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        }
        else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged Array: ";
    for (i = 0; i < k; i++) {
        cout << merged[i] << " ";
    }
}

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[100];

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[100];

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    mergeArrays(arr1, n1, arr2, n2);
    return 0;
}