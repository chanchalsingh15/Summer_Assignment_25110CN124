//Write a program to Find missing number in array [array contains numbers from 1 to n, with one number missing.]
//ex- 1 2 3 5 6   [here 4 is missing]
#include <iostream>
using namespace std;

int findMissing(int arr[] , int n) {
    int totalSum = (n+1)*(n+2)/2;
    int arraySum = 0;
    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
    }
    return totalSum - arraySum;
}

int main() {

    int n ;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = findMissing(arr , n);
    cout << "Missing number is: " << missing;

    return 0;
}