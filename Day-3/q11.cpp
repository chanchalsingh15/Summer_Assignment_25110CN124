// Write a program to Find GCD of two numbers
#include <iostream>
using namespace std;
int main(){

int n1, n2, hcf;

cout << "Enter first number: ";
cin >> n1;

cout << "Enter second number: ";
cin >> n2;

// swappingg n2 with n1 if n2 is greater than n1
if (n2 > n1){
    temp = n2;
    n2 = n1;
    temp = n1;
}

for  (int i = 1; i <= n2; i++){
    if ( n1 % i == 0 && n2 % i == 0){
        hcf = i;
    }
}

cout << "HCF: " << hcf ;
return 0;
}