//Write a program to Check string rotation.
#include <iostream>
using namespace std;
void checkRotation(char str1[], char str2[]) {
    int len1 = 0, len2 = 0;

    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    if (len1 != len2) {
        cout << "Strings are not rotations.";
        return;
    }

    for (int shift = 0; shift < len1; shift++) {
        bool match = true;

        for (int i = 0; i < len1; i++) {
            if (str1[(i + shift) % len1] != str2[i]){
                match = false;
                break;
            }
        }

        if (match) {
            cout << "Strings are rotations.";
            return;
        }
    }

    cout << "Strings are not rotations.";
}

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    checkRotation(str1, str2);

    return 0;
}