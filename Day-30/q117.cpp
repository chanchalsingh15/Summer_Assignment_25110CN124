//Write a program to Create student record system using arrays and strings
#include <iostream>
using namespace std;

// Structure for Student
struct Student
{
    int rollNo;
    char name[30];
    int marks;
};

// Function to display all student records
void display(Student s[], int n)
{
    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << s[i].rollNo << endl;
        cout << "Name        : " << s[i].name << endl;
        cout << "Marks       : " << s[i].marks << endl;
    }
}

int main()
{
    Student s[10];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> s[i].rollNo;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    display(s, n);

    return 0;
}