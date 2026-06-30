// Write a program to Character frequency
#include <iostream>
using namespace std;

void characterFrequency(char str[], char ch) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    cout << "Frequency of " << ch << " = " << count;
}

int main() {
    char str[100], ch;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter the character: ";
    cin >> ch;

    characterFrequency(str, ch);

    return 0;
}