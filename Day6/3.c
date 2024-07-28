#include <stdio.h>
typedef int (*ptr)(int, int);
int add(int a, int b) {
    return a + b;
}
void performOperation(int x, int y, ptr p) {
    int result = p(x, y);
    printf("The result of the operation is: %d\n", result);
}
int main() {
    performOperation(10, 5, add);
    return 0;
}
