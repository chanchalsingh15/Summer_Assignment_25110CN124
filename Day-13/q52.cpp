//Write a program to Count even and odd elements
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 8, 3, 6 ,16, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int even_count = 0, odd_count = 0;

    for  (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }

    cout << "Even elements are : " << even_count << endl;
    cout << "Odd elements are : " << odd_count << endl;

   return 0;
}