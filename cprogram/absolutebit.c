#include <stdio.h>

int absolute(int num) {
    int mask = num >> (sizeof(int) * 8 - 1);
    int absValue = (num ^ mask) - mask;
    return absValue;
}
int main() {
    int num1 = 10;  
    int num2 = -20; 
    int num3 = 0;    
    printf("Absolute value of %d is: %d\n", num1, absolute(num1));
    printf("Absolute value of %d is: %d\n", num2, absolute(num2));
    printf("Absolute value of %d is: %d\n", num3, absolute(num3));
    return 0;
}

