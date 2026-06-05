// Write a program to Print Armstrong numbers in a range

#include <cmath>
#include <iostream>
using namespace std;
int main(){

   int start, end;
   cout << "Enter start of range: ";
   cin >> start;
   cout << "Enter end of range: ";
   cin >> end;
   cout << "Armstrong numbers between " << start << " and" << " " << end << ": ";

   for (int i = start; i <= end; i++){  // calculate  the number of digits
      int originalNum = i , remainder, result=0, n=0 ;
       while (originalNum != 0) {
           originalNum /= 10;
           n++;
       }
       originalNum = i;
       

       while (originalNum != 0) {         // sum of powers
           remainder = originalNum % 10;
           result += round(pow(remainder , n));
           originalNum /= 10;
       }

       if (result == i)
           cout << i << ",";
       
   }
   return 0;
}
