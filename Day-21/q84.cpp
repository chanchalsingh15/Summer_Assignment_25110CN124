//Write a program to Convert lowercase to uppercase
#include <iostream>
using namespace std;

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase String: " << str;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    toUpperCase(str);

    return 0;
}