//Write a program to Convert binary to decimal
#include <iostream>
using namespace std;

int main() {
    int binNum , result = 0 , power = 1 , remainder;
    cout << "Enter a binary number: ";
    cin >> binNum;

    while (binNum > 0) {
        remainder = binNum % 10;
        result += remainder * power;
        binNum /= 10;
        power *= 2;
    }
    cout << "Decimal conversion is " << result;
    return 0;
}