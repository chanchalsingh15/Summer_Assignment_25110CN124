// Write a program to Check whether a number is prime

#include <iostream>
using namespace std;

int main(){

int num, i;
bool check = true;

cout << "Enter a number: ";
cin >> num;

if(num <= 1){
     check = false;
}
else{

  for( int i = 2; i * i <= num; ++i){
     if(num % i == 0){
        
        check = false;
        break;
            
    }  
  }
}

if(check){       
     cout << num << " is a prime number";
}
else{

        cout << num << " is not a prime number";
}
    

return 0;
}