//Write a program to Find x^n without pow()
#include <iostream>
using namespace std;

double findPower(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
int main() {
    double base = 5;
    int exponent = 5;
    cout << "Result: " << findPower(base, exponent) << endl;
    return 0;
}