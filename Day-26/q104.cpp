//Write a program to Create quiz application
#include <iostream>
using namespace std;
void quiz() {
    int score = 0;
    char answer;

    cout << "Q1. What is the capital of India?\n";
    cout << "A. Mumbai\n";
    cout << "B. Delhi\n";
    cout << "C. Kolkata\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b') {
        score++;
    }

    cout << "\nQ2. How many days are there in a week?\n";
    cout << "A. 5\n";
    cout << "B. 6\n";
    cout << "C. 7\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c') {
        score++;
    }

    cout << "\nYour Score = " << score << " out of 2";
}

int main() {
    quiz();

    return 0;
}