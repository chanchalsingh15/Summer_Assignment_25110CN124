//Write a program to Frequency of an element
#include <iostream>
using namespace std;

int Frequency(int arr[] , int size , int target) {
    int count = 0;

    for (int i=0; i<size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1,1,3,2,7,8,5,7,2,6,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    cout << "Enter the element to find frequency: " << endl;
    cin >> target;

    cout << "The frequency of " << target << " is: " << Frequency(arr , size , target) << endl;

    return 0;
}