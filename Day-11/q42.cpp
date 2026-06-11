//Write a program to Write function to find maximum
#include <iostream>
using namespace std;

int findMax(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    int x , y;
    cout << "Enter first number: ";
    cin >> x;
     cout << "Enter second number: ";
    cin >> y;

    cout << "Maximum is: " << findMax(x,y);
    return 0;

}