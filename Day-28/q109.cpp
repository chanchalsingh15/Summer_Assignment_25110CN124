//Write a program to Create library management system
#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

void display(Book b)
{
    cout << "\nBook Details\n";
    cout << "Book ID : " << b.bookId << endl;
    cout << "Title   : " << b.title << endl;
    cout << "Author  : " << b.author << endl;
}

int main() {
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.bookId;

    cout << "Enter Book Title: ";
    cin >> b.title;

    cout << "Enter Author Name: ";
    cin >> b.author;

    display(b);

    return 0;
}