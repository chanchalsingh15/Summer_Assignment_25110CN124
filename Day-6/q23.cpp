// Write a program to Count set bits in a number
#include <iostream>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n-1); // clears the least significant bit set
        count++;
    }
    return count;
}

 int main() {
    int n = 13;
    std::cout << "Number of set bits: " << countSetBits(n) << std::endl;
    return 0;
 }