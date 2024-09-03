#include <stdio.h>

enum {
    summer = 0,
    winter,
    spring,
    autumn,
};

int add(int x, int y) {
    printf("Sum is %d\n", x + y);
    return x + y;
}

int sub(int x, int y) {
    printf("Difference is %d\n", x - y);
    return x - y;
}

int mul(int x, int y) {
    printf("Product is %d\n", x * y);
    return x * y;
}

int div(int x, int y) {
    if (y != 0) {
        printf("Div is %d\n", x / y);
        return x / y;
    } else {
        printf("Division by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    int n, m;
    printf("Enter 2 nos.:\n");
    scanf("%d %d", &n, &m);

    for (int i = summer; i <= autumn; i++) {
        switch (i) {
            case summer:
                printf("Summer: %d\n", i);
                add(n, m);
                break;
            case winter:
                printf("Winter: %d\n", i);
                sub(n, m);
                break;
            case spring:
                printf("Spring: %d\n", i);
                mul(n, m);
                break;
            case autumn:
                printf("Autumn: %d\n", i);
                div(n, m);
                break;
            default:
                printf("Unknown season\n");
                break;
        }
    }

    return 0;
}

