//Write a program to Create employee management system
#include <iostream>
using namespace std;

// Structure for employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to display employee details
void display(Employee e) {
    cout << "\nEmployee Details\n";
    cout << "Employee ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
}

int main() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cout << "Enter Name: ";
    cin >> e.name;

    cout << "Enter Salary: ";
    cin >> e.salary;

    display(e);

    return 0;
}