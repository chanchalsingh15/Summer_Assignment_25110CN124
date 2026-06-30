//Write a program to Create marksheet
generation system.
#include <iostream>
using namespace std;

// Structure for student
struct Student {
    char name[30];
    int rollNo;
    int m1, m2, m3;
    int total;
    float percentage;
};

// Function to generate marksheet
void marksheet(Student s) {
    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3.0;

    cout << "\n----- MARKSHEET -----\n";
    cout << "Name       : " << s.name << endl;
    cout << "Roll No    : " << s.rollNo << endl;
    cout << "Total Marks: " << s.total << endl;
    cout << "Percentage : " << s.percentage << "%" << endl;
}

int main() {
    Student s;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter marks of 3 subjects: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    marksheet(s);

    return 0;
}