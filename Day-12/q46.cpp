// Write a program to Write function for Armstrong [example- 153 = 1^3 + 5^3 + 3^3 ]
#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int num) {
    int originalNum = num;
    int digit = 0;
    int sum = 0;
    int remainder , power;


    //cout the number of digits in the number

    while (num != 0){
     num /= 10;
     digit ++;
    }
    
     num = originalNum;

    // sum of digits

    while (num != 0) {
        remainder = num % 10;
        power = round(pow(remainder,digit));
        sum += power;
        num /= 10;

    }

    return sum == originalNum;

}

int main() {
    int n ;
    cout << "Enter a number: ";
    cin >> n;

    if (armstrong(n)) {
        cout << n << " is an armstrong number";
    }

    else {
        cout << n << " is not an armstrong number";
    }


    return 0;
}
