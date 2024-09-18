#include <stdio.h>
double exponentiation(double, int); /* function declaration */
int main(void)
{
    double a, m;
    int n;
    printf("Exponentiation \n");
    printf("Enter base: ");
    scanf("%lf%*c", &a);
    printf("Enter (non-negative) exponent: ");
    scanf("%d%*c", &n);
    m = exponentiation(a, n); /* function call */
    printf("The result is %16.8f \n", m);
    return 0;
}
/* function definition */
double exponentiation(double base, int exponent)
{
    double result = 1.0;
    int i;
    for (i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
