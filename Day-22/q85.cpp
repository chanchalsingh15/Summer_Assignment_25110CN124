//Write a program to Check palindrome string
#include <iostream>
using namespace std;
void palindrome(char str[]) {
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    bool flag = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    palindrome(str);
    return 0;
}