#include<stdio.h>
int main()
{
int arr[10] = { 1,2,3,4,5,6,7,8,9,0};
int *ptr = &arr[0];
int *ptr1 = ptr + 3;
int *ptr2 = ptr1 - 2;
int diff = ptr1 - ptr2;
printf("Array[0] = %d\n"
        "Array[0+3] = %d\n"
        "Array[0+3-2] = %d\n"
        "Diffference of *ptr2 and *ptr1 = %d\n",*ptr,*ptr1,*ptr2,diff);

}

