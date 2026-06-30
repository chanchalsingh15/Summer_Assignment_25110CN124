//Write a program to Check anagram strings
#include <iostream>
using namespace std;

void checkAnagram(char str1[], char str2[]) {
    int count1 = 0, count2 = 0;

    while (str1[count1] != '\0')
        count1++;

    while (str2[count2] != '\0')
        count2++;

    if (count1 != count2)
    {
        cout << "Not Anagrams";
        return;
    }

    for (int i = 0; i < count1; i++){
        int c1 = 0, c2 = 0;

        for (int j = 0; j < count1; j++) {
            if (str1[i] == str1[j])
                c1++;

            if (str1[i] == str2[j])
                c2++;
        }

        if (c1 != c2) {
            cout << "Not Anagrams";
            return;
        }
    }

    cout << "Strings are Anagrams";
}

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    checkAnagram(str1, str2);

    return 0;
}