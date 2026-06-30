//Write a program to Create number guessing game
#include <iostream>
#include <cstring>
using namespace std;
void sortWords(char words[][20], int n) {
    char temp[20];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    cout << "Words sorted by length:\n";

    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    char words[20][20];

    cout << "Enter words:\n";

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sortWords(words, n);

    return 0;
}