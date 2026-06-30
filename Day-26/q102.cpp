//Write a program to Create voting eligibility system

#include <iostream>
using namespace std;

void checkVoting(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote.";
    }
    else {
        cout << "You are not eligible to vote.";
    }
}

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    checkVoting(age);

    return 0;
}