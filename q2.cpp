// Write a program to Print multiplication table of a given number
#include <iostream>
using namespace std;

int main(){
    int num , range;

    cout << "Enter the number: ";
    cin >> num;
    
    cout << "Enter the range: ";
    cin >> range;

    for( int i = 1; i <= range ; i++){

        cout << num << " * " << i << " = " << (num * i) << endl;

    
    }
    
 return 0;
}