solving a quadratic equation
*/
#include <stdio.h>
#include <math.h>
/* function declarations*/
void linear(float, float);
void quadratic(float, float, float);
void tworealroots(float, float, float);
void oneroot(float, float);
void twocomplexroots(float, float, float);
int main(void)
{
    float a, b, c;
    printf("Solving a quadratic equation. \n");
    printf("Enter the coefficients a, b and c ");
    scanf("%f%f%f%*c", &a, &b, &c);
    if (a)
    {
        quadratic(a, b, c);
    }
    else
    {
        linear(b, c);
    }
    return 0;
}
/* function definitions */
/* function to solve the linear equation ax+b=0 */
void linear(float a, float b)
{
    if (a)
    {
        printf("linear equation with solution: %f \n", -b / a);
    }
    else
    {
        if (b)
            printf("False equation \n");
        else
            printf("Identical equation \n");
    }
}
/* function to solve a true quadratic equation*/
void quadratic(float a, float b, float c)
{
    float d;
    d = b * b - 4 * a * c;
    if (d > 0)
        tworealroots(a, b, d);
    if (d == 0)
        oneroot(a, b);
    if (d < 0)
        twocomplexroots(a, b, d);
}
void tworealroots(float a, float b, float d)
{
    float sqrt_d, x1, x2;
    sqrt_d = sqrt((double)d);
    x1 = (-b + sqrt_d) / 2 / a;
    x2 = (-b - sqrt_d) / 2 / a;
    printf("Two real roots: %f and %f \n", x1, x2);
}
void oneroot(float a, float b)
{
    printf("One root %f \n", -b / 2 / a);
}
void twocomplexroots(float a, float b, float d)
{
    float re, im;
    re = -b / 2 / a;
    im = sqrt((double)(-d)) / 2 / a;
    printf("2 complex roots: %f+%fi and %f-%fi \n", re, im, re, im);
}
