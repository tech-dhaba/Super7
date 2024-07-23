#include <stdio.h>
#define PI 3.14159

int main() {
    const double pi = 3.14159;
    double radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of the circle: %lf\n", area);
    printf("Circumference of the circle: %lf\n", circumference);
    return 0;
}


