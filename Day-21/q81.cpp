//Write a program to Find string length without strlen().
#include <iostream>
using namespace std;

void stringLength(char str[]) {
    int length = 0;

    while (str[length] != '\0'){
        length++;
    }

    cout << "Length of the string = " << length;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    stringLength(str);
    return 0;
}