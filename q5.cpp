// Write a program to Find sum of digits of a number

#include <iostream> 
using namespace std;

int main(){

    int n;
    int digitSum = 0;

    cout << "Enter the number: ";
    cin >> n;

    while( n != 0 ){

      int digit = n%10;
       digitSum += digit ;
       n = n/10;
    }
    cout << " Sum of the digits: " << digitSum << endl;

    return 0;
}
