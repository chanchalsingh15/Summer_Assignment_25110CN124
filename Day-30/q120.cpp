//Write a program to Develop complete mini project using arrays, strings and functions
#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    char name[30];
    int marks;
};

Student s[10];
int count = 0;

// Function to add a student
void addStudent()
{
    cout << "\nEnter Roll Number: ";
    cin >> s[count].rollNo;

    cout << "Enter Name: ";
    cin >> s[count].name;

    cout << "Enter Marks: ";
    cin >> s[count].marks;

    count++;

    cout << "Student Added Successfully!\n";
}

// Function to display students
void displayStudents()
{
    if (count == 0)
    {
        cout << "No Records Found.\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < count; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << s[i].rollNo << endl;
        cout << "Name    : " << s[i].name << endl;
        cout << "Marks   : " << s[i].marks << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}