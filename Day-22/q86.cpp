//Write a program to Count words in a sentence
#include <iostream>
using namespace std;

void countWords(char str[]) {
    int words = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words++;
        }
    }

    cout << "Number of words = " << words;
}

int main() {
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    countWords(str);

    return 0;
}