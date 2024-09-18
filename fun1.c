#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main(void)
{
    int degrees;
    double radians, res;
    printf(" x | sin(x) \n");
    printf("------------------ \n");
    for (degrees = 0; degrees <= 360; degrees += 30)
    {
        radians = (double)degrees * M_PI / 180;
        res = sin(radians);
        printf(" %3d | %f \n", degrees, res);
    }
    return 0;
}
