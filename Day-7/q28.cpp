//Write a program to Recursive reverse number
#include <iostream>
using namespace std;

void printReverse(int n) {
    if (n < 10) {
        cout << n;
    } 
    else { 
        cout << n % 10;
        printReverse(n / 10);

    }
}

int main() {
    int num = 12345;
    cout << "Reversed Number: ";
    printReverse(num);
    cout << endl;
    return 0;
}