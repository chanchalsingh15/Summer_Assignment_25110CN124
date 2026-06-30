//Write a program to Find maximum occurring character
#include <iostream>
using namespace std;

void maxCharacter(char str[]) {
    int maxCount = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    maxCharacter(str);

    return 0;
}