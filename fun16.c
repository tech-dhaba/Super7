#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
double squaroot(double a, double b)
{
    return (sqrt(a * a + b * b));
}
double angle(double a, double b)
{
    double radians = atan(a / b);
    double degrees = radians * (180.0 / M_PI);
    return degrees;
}

int main()
{
    double x, y;
    printf("Enter the 2 value:");
    scanf("%lf%lf", &x, &y);
    double h = squaroot(x, y);
    double a = angle(x, y);
    printf("The length of the hypotenuse (c) is: %.2f\n", h);
    printf("The angle of hypotenuse  is: %.2f\n", a);
    return 0;
}
