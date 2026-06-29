//Write a program to Union of arrays
#include <iostream>
using namespace std;

void unionArray(int arr1[], int n1, int arr2[], int n2) {

    //print elements of arr
    for (int i = 0 ; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    //print only those elements which are not already present in the first array
    for (int i = 0; i < n2; i++) { 
        bool found = false;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (found == false) {
            cout << arr2[i] << " ";
        }
    }
}

int main() {
     int n1, n2;

    cout << "Enter the size of first array: ";
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

    cout << "Union of the arrays: ";
    unionArray(arr1, n1, arr2, n2);

    return 0;
}