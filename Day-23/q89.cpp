//Write a program to Find first non-repeating character
#include <iostream>
using namespace std;

void firstNonRepeating(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << "First non-repeating character: " << str[i];
            return;
        }
    }

    cout << "No non-repeating character found.";
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    firstNonRepeating(str);

    return 0;
}