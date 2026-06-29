//Write a program to Intersection of arrays
#include <iostream>
using namespace std;

void intersectionArray(int arr1[], int n1, int arr2[], int n2) {
    cout << "Intersection of the arrays: ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;                  //move to the next element of the array
            }
        }
    }
}

int main()
{
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

    intersectionArray(arr1, n1, arr2, n2);

    return 0;
}