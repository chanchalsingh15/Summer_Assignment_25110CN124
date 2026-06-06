// Write a program to Find largest prime factor
#include <cmath>
#include <iostream>
using namespace std;
 int main() {
    int num; 
    bool isPrime = true;
    int largestFactor = -1;


    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2 ; i <= num ; i++){
        if (num % i == 0){
            isPrime = true;

            for (int j = 2 ; j < i ; j++){
                if (i % j == 0){
                    isPrime = false;
                    break;
                }
            }

            if(isPrime){
                largestFactor = i;
            
            }
        }
    }

    if (largestFactor == -1){
        cout << "No prime factor found";
    }
    else {
        cout << "Largest prime factor of " << num << " is: " << largestFactor;
    }
     return 0;
 }
