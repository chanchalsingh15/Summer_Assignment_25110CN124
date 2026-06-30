//Write a program to Create ticket booking system
#include <iostream>
using namespace std;

struct Ticket
{
    char name[30];
    int seatNo;
};

void display(Ticket t)
{
    cout << "\nTicket Booked Successfully!\n";
    cout << "Passenger Name : " << t.name << endl;
    cout << "Seat Number    : " << t.seatNo << endl;
}

int main()
{
    Ticket t;

    cout << "Enter Passenger Name: ";
    cin >> t.name;

    cout << "Enter Seat Number: ";
    cin >> t.seatNo;

    display(t);

    return 0;
}