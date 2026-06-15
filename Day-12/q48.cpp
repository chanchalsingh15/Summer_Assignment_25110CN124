// Write a program to Write function for perfect number 
// [ examples = 6(1+2+3) ] (sum of factors of a number is equal to the number)
#include <iostream>
using namespace std;

int perfectNum(int n) {
    int div=1, sum=0;

    while (div < n) {
       if (n % div == 0) {
           sum += div;
        }
      div++;
    }

    return n == sum;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;
    
    if (perfectNum(num))  {
     cout << num << " is a perfect number";
    }

    else {
     cout << num << " is not a perfect number";
    }
   
 return 0;
}
