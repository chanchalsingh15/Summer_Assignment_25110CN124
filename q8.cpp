// Write a program to Check whether a number is palindrome

#include <iostream>
using namespace std;

int main(){
    int n, num , remainder, revNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    n = num;

    while( num != 0){
        remainder = num % 10;
        revNum = (revNum * 10) + remainder;
        num = num / 10;
    }
    
    if(n == revNum){
        cout << n << " is a palindrome.";
    }
    else{
        cout << n << " is not a palinndrome.";
    }
        
         return 0;
}