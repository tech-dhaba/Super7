#include <stdio.h>
double exponentiation(int base, int m)
{
    int i, result = 1;
    for (i = 0; i < m; i++)
    {
        result *= base;
    }
    // double result = pow(a,m);
    return result;
}

int main()
{
    int a, m;
    printf("Enter the value:");
    scanf("%d %d", &a, &m);
    int b = exponentiation(a, m);
    printf("%d", b);
    return 0;
}
