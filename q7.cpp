// Write a program to Find product of digits 

#include <iostream>
using namespace std;

int main(){
 int num , product = 1; 
 cout << "Enter a number: ";
 cin >> num;
if(num == 0){
    product = 0;
}
else{
    if(num < 0){
        num = -num;
    }

        while( num !=0 ){

          int remainder = num % 10;
          num = num / 10;
          product = product * remainder;
 }
}
 cout << "The product of the digits: " << product << endl;


    return 0;
}