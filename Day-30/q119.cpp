//Write a program to Create mini employee management system
#include <iostream>
using namespace std;

// Structure for Employee
struct Employee
{
    int id;
    char name[30];
    float salary;
};

// Function to display employee records
void display(Employee e[], int n)
{
    cout << "\n----- Employee Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << e[i].id << endl;
        cout << "Name        : " << e[i].name << endl;
        cout << "Salary      : " << e[i].salary << endl;
    }
}

int main()
{
    Employee e[10];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> e[i].id;

        cout << "Name: ";
        cin >> e[i].name;

        cout << "Salary: ";
        cin >> e[i].salary;
    }

    display(e, n);

    return 0;
}