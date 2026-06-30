//Write a program to Create mini library system
#include <iostream>
using namespace std;

// Structure for Book
struct Book
{
    int bookId;
    char title[30];
    char author[30];
};

// Function to display books
void display(Book b[], int n)
{
    cout << "\n----- Library Books -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID : " << b[i].bookId << endl;
        cout << "Title   : " << b[i].title << endl;
        cout << "Author  : " << b[i].author << endl;
    }
}

int main()
{
    Book b[10];
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> b[i].bookId;

        cout << "Title: ";
        cin >> b[i].title;

        cout << "Author: ";
        cin >> b[i].author;
    }

    display(b, n);

    return 0;
}