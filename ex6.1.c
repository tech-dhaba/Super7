#include <stdio.h>
#include <math.h>

int main() {
    double angle_degrees, angle_radians, sine_value;

    // Prompt the user for the angle in degrees
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert the angle to radians
    angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the sine of the angle
    sine_value = sin(angle_radians);

    // Print the sine value
    printf("The sine of %.2f degrees is %.5f\n", angle_degrees, sine_value);

    return 0;
}
