#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        register unsigned long long result = n * factorial(n - 1);
        return result;
    }
}

int main() {
    int num = 9; 
    unsigned long long fact = factorial(num);
    printf("Factorial of %d = %llu\n", num, fact);
    return 0;
}

