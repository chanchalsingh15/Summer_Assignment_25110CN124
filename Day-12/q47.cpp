// Write a program to Write function for Fibonacci
#include <iostream>
using namespace std;

void fibonacci(int n){
     int t1 = 0 , t2 = 1 , nextTerm;
    
     for (int i = 1; i <= n; i++){
        if (i == 1){
            cout << t1 << " , ";
        }

        if (i == 2){
            cout << t2 << " , ";
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " , ";
    }
}

int main() {
    int num;
    cout << "Enter the range: ";
    cin >> num;

    cout << "The fibonacci series is: ";
    fibonacci(num);

    return 0;
}