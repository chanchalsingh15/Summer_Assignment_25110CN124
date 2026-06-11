//Write a program to Convert decimal to binary
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int decNum , remainder , power = 1 , result = 0 ;

    cout << "Enter a number: ";
    cin >> decNum;

    while (decNum > 0) {
        remainder = decNum % 2;
        decNum = decNum / 2;
        result += remainder * power;
        power *= 10;
    }
    cout << "Binary conversion is " << result;

    return 0;
}