//Write a program to Write function to find sum of two numbers

#include <iostream>
using namespace std;

int findSum(int num1, int num2){
    return num1 + num2;
}

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int sum = findSum(a,b);
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;

}