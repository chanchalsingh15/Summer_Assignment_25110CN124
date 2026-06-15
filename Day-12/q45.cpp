//Write a program to Write function for palindrome
#include <iostream>
using namespace std;

bool palindrome(int num) {
    int originalNum = num;
    int revNum = 0;

    if (num < 0) 
        return false;
    
  
    while ( num > 0 ) {
        int remainder = num % 10;
        revNum = revNum *  10 + remainder;
        num = num / 10;
       }
       return originalNum == revNum;
       
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

     if (palindrome(n)){
        cout << n << " is a palindrome number";
       }
       else {
        cout << n << " is not a palindrome number";
       }


    return 0;
}