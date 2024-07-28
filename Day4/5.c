#include <stdio.h>
void swap(int *a, int *b);
void performSwap(void (*swapFunc)(int *, int *), int *a, int *b);
int main() {
   int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    performSwap(swap, &x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void performSwap(void (*swapFunc)(int *, int *), int *a, int *b) {
    swapFunc(a, b);
}



