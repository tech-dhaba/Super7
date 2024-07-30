#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
uint32_t nexthigher(uint32_t n){
    int num = countBits(n);
    uint32_t num1=n+1;
    while(1){
    if(num==countBits(num1)){
    return num1;}
    else{
    num1++;
}
}
}
uint32_t nextlower(uint32_t n){
    int num = countBits(n);
    uint32_t num1=n-1;
    while(1){
    if(num==countBits(num1)){
    return num1;}
    else {
    num1--;
}
}}
uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}

int countBits(uint32_t n) {
    int count = 0;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

void setBit(uint32_t *n, int pos) {
    *n |= (1U << pos);
}

void clearBit(uint32_t *n, int pos) {
    *n &= ~(1U << pos);
}

void toggleBit(uint32_t *n, int pos) {
    *n ^= (1U << pos);
}

bool checkParity(uint32_t n) {
    return countBits(n) % 2 == 0; 
}

bool isPowerOfTwo(uint32_t n) {
    return (n != 0) && ((n & (n - 1)) == 0);
}

uint32_t swapOddEvenBits(uint32_t n) {
    return ((n & 0b10101010101010101010101010101010) >> 1) | ((n & 0b01010101010101010101010101010101) << 1);
}

int findUnique(int arr[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= arr[i];
    }
    return unique;
}

int missingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return total - sum;
}

uint32_t pairwiseSwap(uint32_t n) {
    return ((n & 0b10101010101010101010101010101010) >> 1) | ((n & 0b01010101010101010101010101010101) << 1);
}

uint32_t rotateLeft(uint32_t n, int d) {
    return (n << d) | (n >> (32 - d));
}

uint32_t rotateRight(uint32_t n, int d) {
    return (n >> d) | (n << (32 - d));
}

uint32_t extractBits(uint32_t n, int pos, int len) {
    return (n >> pos) & ((1U << len) - 1);
}

uint32_t insertBits(uint32_t n, uint32_t m, int pos, int len) {
    uint32_t mask = ((1U << len) - 1) << pos;
    n &= ~mask;
    n |= (m << pos) & mask;
    return n;
}
uint32_t clearBitsRange(uint32_t n, int i, int j) {
    uint32_t mask = ((1U << (j - i + 1)) - 1) << i;
    return n & ~mask;
}
uint32_t reverseBitsRange(uint32_t n, int i, int j) {
    uint32_t left = extractBits(n, i, j - i + 1);
    uint32_t reversed = reverseBits(left) >> (32 - (j - i + 1));
    uint32_t mask = ((1U << (j - i + 1)) - 1) << i;
    return (n & ~mask) | (reversed << i);
}

uint32_t rangeBitwiseAnd(uint32_t m, uint32_t n) {
    while (n > m) {
        n &= (n - 1);
    }
    return n;
}

void xorSwap(int *a, int *b) {
    if (a != b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

uint32_t Bitdivide(uint32_t n, uint32_t d) {
    return n >> d;
}

void printBinary(uint32_t n) {
    for (int i = 31; i >= 0; i--) {
        putchar((n & (1U << i)) ? '1' : '0');
        if (i % 4 == 0) putchar(' ');
    }
    putchar('\n');
}
int main() {
    uint32_t n = 0b110100101;
    uint32_t n1= 0b110100110;
    uint32_t m = 0b101;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original number: ");
    printBinary(n);
    printf("Reversed bits: ");
    printBinary(reverseBits(n));
    printf("Number of 1 bits: %d\n", countBits(n));

    printf("Swapped odd and even bits: ");
    printBinary(swapOddEvenBits(n));

    printf("Pairwise swapped bits: ");
    printBinary(pairwiseSwap(n));

    printf("Left rotated by 3: ");
    printBinary(rotateLeft(n, 3));

    printf("Right rotated by 3: ");
    printBinary(rotateRight(n, 3));

    printf("Extracted bits (3 bits from position 5): ");
    printBinary(extractBits(n, 5, 3));

    printf("Inserted bits (0b101 at position 3): ");
    printBinary(insertBits(n, m, 3, 3));

    printf("Cleared bits range (2 to 4): ");
    printBinary(clearBitsRange(n, 2, 4));

    printf("Reversed bits in range (2 to 6): ");
    printBinary(reverseBitsRange(n, 2, 6));

    printf("Range bitwise AND (5 to 7): ");
    printBinary(rangeBitwiseAnd(5, 7));

    printf("Bitwise divide by 4: ");
    printBinary(Bitdivide(n,2));

    printf("Next higher number with same set bits : ");
    printBinary(nexthigher(n));

    printf("Next lower  number with same set bits : ");
    printBinary(nextlower(n1));
}

