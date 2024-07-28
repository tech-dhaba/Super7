#include<stdio.h>
void bitwise_swap(int *a, int *b){
if(a!=b)
{
        *a = *a^*b;
        *b = *a^*b;
        *a = *a^*b;
}
}
int main()
{
        int a = 9;
        int b = 11;
        printf("Original numbers are: %d %d\n",a,b);

        bitwise_swap(&a,&b);
        printf("After Swapping: %d %d\n",a,b);

        return 0;
}

