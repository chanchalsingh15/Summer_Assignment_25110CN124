//Write a program to Create student record management system
#include <iostream>
using namespace std;
struct Student {
    int rollNo;
    char name[50];
    int marks;
};

// Function to display student details
void display(Student s)
{
    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks: ";
    cin >> s.marks;

    display(s);

    return 0;
}