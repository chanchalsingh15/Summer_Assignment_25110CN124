// Write a program to Check perfect number
#include <iostream>
using namespace std;
int main() {

int num, div=1, sum=0;
cout << "Enter a number: ";
cin >> num;

while (div < num) {
    if (num % div == 0) {
        sum += div;
    }
    div++;
}

if (sum == num) {
    cout << "The number is a perfect number";
}
else {
    cout << "The number is not a perfect number";
}
   
return 0;
}