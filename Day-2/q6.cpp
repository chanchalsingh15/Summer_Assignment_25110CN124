// Write a program to Reverse a number

#include <iostream>
using namespace std;

int main(){
 int num , remainder, revNum = 0;

 cout << "Enter a Number: ";
 cin >> num;

 while( num != 0 ){
 
    remainder = num % 10;
    num = num / 10;
    revNum = (revNum * 10) + remainder;

 }
 cout << "The reversed number is: " << revNum << endl;

    return 0;
}