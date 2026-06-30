///Write a program to Create menu-driven array operations system

#include <iostream>
using namespace std;

// Function for array operations
void arrayOperations()
{
    int arr[100], n, choice, sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n1. Display Array\n";
    cout << "2. Find Sum\n";
    cout << "3. Find Maximum\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2:
            for (int i = 0; i < n; i++)
                sum += arr[i];

            cout << "Sum = " << sum;
            break;

        case 3:
        {
            int max = arr[0];

            for (int i = 1; i < n; i++)
            {
                if (arr[i] > max)
                    max = arr[i];
            }

            cout << "Maximum = " << max;
            break;
        }

        default:
            cout << "Invalid Choice";
    }
}

int main()
{
    arrayOperations();

    return 0;
}