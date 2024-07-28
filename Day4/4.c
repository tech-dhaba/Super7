#include<stdio.h>
#define size_of_datatype(datatype) ((int*)(&datatype+1) - (int*)(&datatype))
 main()
{
        int *ptr = (int) (0x30000);
        int *x = ptr++;
        printf(" x: %x\n",x);
        int *y = ++ptr;
        printf("y: %x\n",y);

        int datatype;
        printf("Size : %d",size_of_datatype( datatype));
}

