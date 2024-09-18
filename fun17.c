#include <stdio.h>

int main()
{
    double x, y;
    printf("%-10s %-10s\n", "x", "y");
    printf("--------------------\n");
    for (x = -5; x <= 5; x += 0.5)
    {

        y = 2 * x * x + 2 * x - 3;

        printf("%-10.2f %-10.2f\n", x, y);
    }

    return 0;
}

