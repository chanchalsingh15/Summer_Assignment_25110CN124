// Write a program to Find nth Fibonacci term
#include <iostream>
using namespace std;

int fib(int n) {
    // Base cases for 0th and 1st terms
    if (n <= 1) return n;

    int prev2 = 0; // F(0)
    int prev1 = 1; // F(1)
    int curr;

    // Iterate from 2 to n to calculate the nth term
    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

int main() {
    int n = 5;
    cout << "The " << n << "th Fibonacci number is: " << fib(n) << endl;
    return 0;
}   