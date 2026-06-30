//Write a program to Create inventory management system
#include <iostream>
using namespace std;

struct Item
{
    int id;
    char name[30];
    int quantity;
    float price;
};

// Function to display item details
void display(Item item)
{
    cout << "\n----- Inventory Details -----\n";
    cout << "Item ID   : " << item.id << endl;
    cout << "Item Name : " << item.name << endl;
    cout << "Quantity  : " << item.quantity << endl;
    cout << "Price     : " << item.price << endl;
}

int main()
{
    Item item;

    cout << "Enter Item ID: ";
    cin >> item.id;

    cout << "Enter Item Name: ";
    cin >> item.name;

    cout << "Enter Quantity: ";
    cin >> item.quantity;

    cout << "Enter Price: ";
    cin >> item.price;

    display(item);

    return 0;
}