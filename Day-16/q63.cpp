//Write a program to Find pair with given sum
#include <iostream>
using namespace std;

void findPair(int arr[], int n, int sum) {

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                found = true;
            }

        }
    }

    if (found == false){
        cout << "No pair found" << endl;
    }
}

int main() {
    int n , sum;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the required sum: ";
    cin >> sum;
    findPair(arr, n , sum);

    return 0;
}