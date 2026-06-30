//Write a program to Create menu-driven string operations system
#include <iostream>
using namespace std;

// Function for string operations
void stringOperations()
{
    char str[100];
    int choice, length = 0;

    cout << "Enter a string: ";
    cin >> str;

    cout << "\n1. Find Length\n";
    cout << "2. Convert to Uppercase\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            while (str[length] != '\0')
            {
                length++;
            }

            cout << "Length = " << length;
            break;

        case 2:
            for (int i = 0; str[i] != '\0'; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }

            cout << "Uppercase String: " << str;
            break;

        default:
            cout << "Invalid Choice";
    }
}

int main()
{
    stringOperations();

    return 0;
}