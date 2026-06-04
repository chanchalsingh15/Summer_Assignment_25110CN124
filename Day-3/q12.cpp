// Write a program to Find LCM of two numbers

#include <iostream>
using namespace std;

int main(){ 

    int n1, n2, max;
    
    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    max = (n1 > n2)? n1 : n2 ;

    while (true){

    if ( max % n1 == 0 && max % n2 == 0){
        cout << "LCM: " << max;
        break;

    }
    else{
    ++max;
    }
}
    return 0;
}