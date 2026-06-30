// Write a program to Create contact management system
#include <iostream>
using namespace std;

struct Contact
{
    char name[30];
    char phone[15];
};

void display(Contact c)
{
    cout << "\nContact Details\n";
    cout << "Name  : " << c.name << endl;
    cout << "Phone : " << c.phone << endl;
}

int main()
{
    Contact c;

    cout << "Enter Name: ";
    cin >> c.name;

    cout << "Enter Phone Number: ";
    cin >> c.phone;

    display(c);

    return 0;
}