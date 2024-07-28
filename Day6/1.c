#include<stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*fp)(int, int) = add;  
    int result = fp(3, 4);      
    printf("Result: %d\n", result);         
    return 0;
}

