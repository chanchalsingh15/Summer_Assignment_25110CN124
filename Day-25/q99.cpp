//Write a program to Sort names alphabetically
#include <iostream>
#include <cstring>
using namespace std;

void sortNames(char names[][20], int n) {
    char temp[20];

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout << "Names in Alphabetical Order:\n";

    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    char names[20][20];

    cout << "Enter names:\n";

    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    sortNames(names, n);

    return 0;
}