#include <stdio.h>
int determineSign(int num) {
    int sign = num >> (sizeof(int) * 8 - 1);
    if (sign == 0) {
        return num == 0 ? 0 : 1; 
    } else {
        return -1; 
    }
}
int main() {
    int num1 = 10; 
    int num2 = -20;
    int num3 = 0;   
    printf("%d is %s\n", num1, determineSign(num1) == 0 ? "zero or negative" : "positive");
    printf("%d is %s\n", num2, determineSign(num2) == -1 ? "negative" : "zero or positive");
    printf("%d is %s\n", num3, determineSign(num3) == 0 ? "zero or positive" : "negative");
    return 0;
}

