// Write a program to Print repeated-number
// pattern.
// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=0; i<n; i++){
        for (int j=1; j<=i+1; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}