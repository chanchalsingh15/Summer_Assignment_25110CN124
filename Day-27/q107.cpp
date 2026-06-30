//Write a program to Create salary management system
#include <iostream>
using namespace std;

// Structure for employee salary
struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

// Function to calculate total salary
void calculateSalary(Employee &e)
{
    e.totalSalary = e.basicSalary + e.bonus;

    cout << "\nSalary Details\n";
    cout << "Employee ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << e.totalSalary << endl;
}

int main() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cout << "Enter Name: ";
    cin >> e.name;

    cout << "Enter Basic Salary: ";
    cin >> e.basicSalary;

    cout << "Enter Bonus: ";
    cin >> e.bonus;

    calculateSalary(e);

    return 0;
}