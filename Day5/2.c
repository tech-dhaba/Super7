#include<stdio.h>
int main()
{
        int a = 10;
        int *ptr = &a;
        int **pptr = &ptr;
        printf("Value of a: %d\n"
  "Valur at ptr  : %d\n"
                "Value at pptr : %d\n",a,*ptr,**pptr);
}


