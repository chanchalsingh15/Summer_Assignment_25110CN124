// Write a program to Check strong number
#include <iostream>
using namespace std;
int main() {

    int num ,originalNum, remainder;
    long long factorial, sum=0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    while (originalNum > 0){
        remainder = originalNum % 10;       // find the last digits
        factorial = 1;                      // calculate the factorial of the digit

        for (int i = 1 ; i <= remainder ; i++){   
            factorial *= i;
        }
         sum += factorial;                    // add factorial to the sum
         originalNum /= 10;                   // remove last digits
        }

        if (sum == num){                             // check if sum of factorial of digits is equal to the number
            cout << "The number is a strong number";
        }
        else {
             cout << "The number is not a strong number";
        }
        
    return 0;
}