//Write a program to Find longest word
#include <iostream>
using namespace std;

void longestWord(char str[]) {
    int maxLength = 0, length = 0;
    int end = 0;

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            length++;
        }
        else {
            if (length > maxLength) {
                maxLength = length;
                end = i;
            }

            length = 0;
        }

        if (str[i] == '\0')
            break;
    }

    cout << "Longest word: ";

    for (int i = end - maxLength; i < end; i++) {
        cout << str[i];
    }
}

int main() {
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    longestWord(str);

    return 0;
}