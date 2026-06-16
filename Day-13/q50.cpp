//Write a program to Find sum and average of array
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elemnts: ";
    cin >> size;

    int arr[100];
    double sum = 0;

    cout << "Enter " << size << " numbers" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / size;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}