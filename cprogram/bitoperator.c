#include <stdio.h>
int bitwiseAND(int x, int y) {
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int bitwiseOR(int x, int y) {
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int bitwiseXOR(int x, int y) {
    return (~(~x & ~y)) & ~(x & y);
}
int main() {
    int num1 = 12;
    int num2 = 25;
    printf("Bitwise AND of %d and %d is: %d\n", num1, num2, bitwiseAND(num1, num2));
    printf("Bitwise OR of %d and %d is: %d\n", num1, num2, bitwiseOR(num1, num2));
    printf("Bitwise XOR of %d and %d is: %d\n", num1, num2, bitwiseXOR(num1, num2));
    return 0;
}

