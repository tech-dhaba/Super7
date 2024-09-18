#include <stdio.h>
void line(int lenght)
{

    int i;

    for (i = 0; i < lenght; i++)
    {
        printf(" ");
    }
    printf("\n\n");
}
int main()
{
    line(10);
    line(20);
    line(30);
    line(40);
    line(30);
    line(20);
    line(10);

    return 0;
}
