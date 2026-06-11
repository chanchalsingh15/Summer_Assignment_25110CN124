// Write a program to Recursive Fibonacci
#include <iostream>
using namespace std;

int fibonacci(int n) {
    //Base case: F(0) = 0, F(1) = 1
    if (n <= 1) {
        return n;
    }

    //Recursive case : F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms = 10;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}