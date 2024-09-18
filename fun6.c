#include <stdio.h>

int swap(int *x, int *y)
{
    int temp;
    temp = *x + *y;
    *x = temp - *x;
    *y = temp - *y;
}

int main()
{
    int a, b;
    printf("Enter the 2 number: ");
    scanf("%d %d", &a, &b);
    // printf("Before the swaping: %d %d\n",a,b);
    swap(&a, &b);
    printf("After the swaping:%d %d\n", a, b);

    return 0;
}
