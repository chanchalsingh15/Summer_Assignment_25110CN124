//Write a program to Find maximum frequency element
#include <iostream>
using namespace std;

void maxFrequencyElement(int arr[], int n) {
    int maxCount = 0, maxElement;
    
    for (int i = 0; i < n; i++) {
        int count = 0;

        //count how many times an element appears
        for (int j = 0 ; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }


        //update maximum frequency 
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    cout << "Element with maximum frequency = " << maxElement << endl;
    cout << "Frequency = " << maxCount << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the lements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    maxFrequencyElement(arr, n);

    return 0;
}


