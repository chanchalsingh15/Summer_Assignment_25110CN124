//Write a program to Reverse a string
#include <iostream>
using namespace std;

void reverseString(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    cout << "Reversed string: ";

    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    reverseString(str);
    return 0;
}