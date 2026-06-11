//Write a program to Recursive factorial
#include<iostream>
using namespace std;

long long factorial(int n) {

    //base case - factorial of 0 and 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }

    //Recursive case - n! = n*(n-1)!
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a  positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative case " << endl;
    } 
    else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }
    return 0;
}