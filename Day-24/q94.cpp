//Write a program to Compress a string
#include <iostream>
using namespace std;
void compressString(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        int count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        cout << str[i] << count;

        i++;
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    cout << "Compressed string: ";
    compressString(str);

    return 0;
}