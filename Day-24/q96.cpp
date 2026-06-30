//Write a program to Remove duplicate characters
#include <iostream>
using namespace std;

void removeDuplicates(char str[]) {
    cout << "String after removing duplicates: ";

    for (int i = 0; str[i] != '\0'; i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                duplicate = true;
                break;
            }
        }

        if (duplicate == false) {
            cout << str[i];
        }
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    removeDuplicates(str);

    return 0;
}