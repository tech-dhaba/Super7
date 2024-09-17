//Optimize the following operations using bitwise techniques:
//Multiplication by 2.
//Division by 2.
//Checking if a number is a power of 2.
//Swapping two numbers without using a temporary variable.

#include<stdio.h>

int multiply(int n) {
    return n << 1;
}
int divide(int n) {
    return n >> 1;
}
int isPower(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
void swap(int* a, int* b) {
    if (a != b) {
        *a = *a ^ *b;
        *b = *b ^ *a;
        *a = *a ^ *b;
    }
}
int main() {
    int a = 5, b = 10;
    printf("Multiply by 2: %d * 2 = %d\n", a, multiply(a));
    printf("Divide by 2: %d / 2 = %d\n", b, divide(b));
    printf("Is 16 a power of 2? %d\n", isPower(16));
    printf("Is 18 a power of 2? %d\n", isPower(18));
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
}

