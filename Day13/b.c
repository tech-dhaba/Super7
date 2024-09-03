//Problem: Count the number of ones in a given integer using bitwise operations.
//Challenge: Implement a highly efficient solution for large integers or multiple counts.

#include <stdio.h>
int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1); 
        count++;
    }
    return count;
}
int main() {
    unsigned int number = 29; 
    printf("Number of set bits in %u: %d\n", number, countSetBits(number));
    return 0;
}

