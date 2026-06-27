//Write a program to Linear search
#include <iostream>
using namespace std;
int linearSearch(int arr[] , int size, int target) {
    for (int i = 0; i < size; i++){
        if (arr[i] == target) { 
        return i;
        }
    }
    return -1;               //when the element is not found
}

int main() {
    int arr[] = {1 , 6 , 7 , 23, 19, 43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    cout << linearSearch(arr, size, target) << endl;
    
    return 0 ;
}