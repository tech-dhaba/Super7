#include <stdio.h>
#define LINELENGTH 60
void line(void);
int main(void)
{
    line(); /* function call */
    line();
    return 0;
}

void line(void) /* function definition */
{
    int i;
    for (i = 0; i < LINELENGTH; i++)
    {
        printf(" - ");
    }
    printf("\n");
}
