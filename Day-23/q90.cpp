//Write a program to Find first repeating character
#include <iostream>
using namespace std;

void firstRepeating(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                cout << "First repeating character: " << str[i];
                return;
            }
        }
    }

    cout << "No repeating character found.";
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    firstRepeating(str);

    return 0;
}