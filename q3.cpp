// Write a program to Find factorial of a number
#include <iostream>
using namespace std;

int main(){

int num;
long long factorial = 1;

cout << "Enter a positive integer: ";
cin >> num;

if( num < 0 ){
    cout << "Error! Factorial of a negative number does not exist.";
}

else if( num <= 1 ){
    cout << num << "! = " << factorial;
}

else{
    for( int i = 1; i <= num;  i++){
   
    factorial = factorial * i;
}
cout << num << "! = " << factorial;

}
    return 0;
}