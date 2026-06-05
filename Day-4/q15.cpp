// Write a program to Check Armstrong number of 3 digits
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int num, originalNum, n=0, remainder, result= 0, power;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

      while (originalNum != 0){       //calculate the number of digits
        originalNum /= 10;
        n++;
    }
    originalNum = num;

    while (originalNum != 0){             //sum of powers
        remainder = originalNum % 10;
        power = round(pow(remainder,n));
        result += power;
        originalNum /= 10;
    }

    if (result == num) {
        cout << "The given number is an armstrong number";
    }
    else {
        cout <<"The given number is not an armstrong number";
    }
    return 0;
}