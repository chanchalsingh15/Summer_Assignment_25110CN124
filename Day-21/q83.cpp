// Write a program to Count vowels and consonants
#include <iostream>
using namespace std;
void countVC(char str[]){
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    countVC(str);
    return 0;
}