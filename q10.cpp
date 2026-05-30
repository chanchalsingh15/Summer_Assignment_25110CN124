// Write a program to Print prime numbers in a range
#include <iostream>
#include  <cmath>
using namespace std;

int main(){
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    for (int num = start; num <= end; num++){

    if (num <2){
        continue;
    }


    bool isPrime = true;


    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            isPrime = false;
            break;
        }
    

    if (isPrime){
        cout << num << " ";
    }

  }

}

cout << endl;

return 0;
}