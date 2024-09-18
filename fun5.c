#include <stdio.h>
#include <stdio.h>

int add(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("add = %d", add(&a, &b));
    return 0;
}

