//Write a program to Print character pyramid
#include <iostream>
using namespace std;
int main() {
   int n = 5;
   for (int i = 1; i <= n; i++){
        for (int j = i; j < n; j++){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            cout << (char)('A'+k-1);
        }

        for (int k = i-1; k >= 1; k--){
            cout << (char)('A'+k-1);
        }

        cout << endl;
    }

     return 0;
}