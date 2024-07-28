#include <stdio.h>

unsigned int rotate_left(unsigned int num,unsigned int n) {
    return (num << n);
}
int main() {
    unsigned int num = 0b1011;
    unsigned int n = 2;
    unsigned int result = rotate_left(num, n);
    printf("Original: %u\n", num);
    printf("Rotated:  %u\n", result);
    return 0;
}

