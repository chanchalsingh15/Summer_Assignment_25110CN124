//Write a program to Recursive sum of digits
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    // Base: if single digit, return it
    if (n == 0)
    return 0;
return (n % 10 + sumOfDigits(n / 10));
}

int main() {
    int num = 123;
    cout << "Sum of digits: " << sumOfDigits(num) << endl;
    return 0;
}