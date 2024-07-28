
#include <stdio.h>
typedef int (*Of)(int, int);
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int main() {
    Of operations[2] = { add, subtract};
    int x = 10, y = 5;
    for (int i = 0; i < 2; i++) {
        int result = operations[i](x, y);
        switch (i) {
            case 0:
                    printf("Add: %d + %d = %d\n", x, y, result);
                    break;
            case 1:
                    printf("Subtract: %d - %d = %d\n", x, y, result);
                    break;
        }
    }
    return 0;
}
