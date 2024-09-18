#include <stdio.h>
#include <math.h>
#define M_PI 3.14
int main()
{
    int degree;
    double radians, res;
    printf("Enter the  value:");
    scanf("%d",&degree);
    printf(" x | cos(x)\n");
    printf("--------\n");
    //for (degree = 0; degree < 360; degree += 30)
    //{
        radians = (double)degree * M_PI / 180;
        res = cos(radians);
        printf(" %d | %2.4f \n", degree, res);
    //}
    return 0;
}
