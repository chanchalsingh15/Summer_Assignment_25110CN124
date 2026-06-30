//Write a program to Remove spaces from string
#include <iostream>
using namespace std;
void removeSpaces(char str[]) {
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    cout << "String after removing spaces: " << str;
}

int main() {
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    removeSpaces(str);

    return 0;
}