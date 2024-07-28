#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*func_ptr)(int, int) = add;
    int result = func_ptr(5, 7);
    printf("The result of the addition is: %d\n", result);
    return 0;
}
