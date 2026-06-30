//Write a program to Create bank account system
#include <iostream>
using namespace std;

struct Account
{
    int accountNo;
    char name[30];
    float balance;
};

void display(Account a)
{
    cout << "\nAccount Details\n";
    cout << "Account Number : " << a.accountNo << endl;
    cout << "Name           : " << a.name << endl;
    cout << "Balance        : " << a.balance << endl;
}

int main() {
    Account a;

    cout << "Enter Account Number: ";
    cin >> a.accountNo;

    cout << "Enter Name: ";
    cin >> a.name;

    cout << "Enter Balance: ";
    cin >> a.balance;

    display(a);

    return 0;
}