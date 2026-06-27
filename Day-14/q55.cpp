//Write a program to Second largest element
#include <iostream>
using namespace std;

void secondLargest(int arr[] , int n) {
    if (n < 2) {
        cout << " Array should have at least 2 elements. " << endl;
        return;
    }

    int first = INT_MIN;          //INT_MIN = -infinity
    int second = INT_MIN;

    for (int i = 0 ; i < n ; i++) {

        // if current element is greater than first , update both
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }

        // if current element is between first and second, update second
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest element found (all element may be same)." << endl;
    }
    else {
        cout << "Second largest element is: " << second << endl;
    }
}

int main() {
    int arr[] = {10, 25, 11, 34, 40, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLargest(arr, n);
    return 0;
}