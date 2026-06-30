//Write a program to Create contact management system
#include <iostream>
using namespace std;

// Function for calculator
void calculator()
{
    int choice;
    float a, b;

    cout << "\n----- Calculator -----\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice)
    {
        case 1:
            cout << "Result = " << a + b;
            break;

        case 2:
            cout << "Result = " << a - b;
            break;

        case 3:
            cout << "Result = " << a * b;
            break;

        case 4:
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid Choice";
    }
}

int main() {
    calculator();

    return 0;
}