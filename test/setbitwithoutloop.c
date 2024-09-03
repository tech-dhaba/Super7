//C questions 2. Write a C function that takes an unsigned integer as input and returns the number of set bits (1s) in its binary representation. Implement this function using bitwise operations without using any loops or built-in functions.
#include<stdio.h>
unsigned int setbits(unsigned int val)
{
    int i,ct=0;
    int size=sizeof(val)*8;
    cal:
    if(val&1)
    {
        ct++;
        
    }
    val>>=1;
    if(val!=0)
    {
        goto cal;
    }
    return ct;
}
int main()
{
    unsigned int num,r;
    printf("Enter number:\n");
    scanf("%u",&num);
    r=setbits(num);
    printf("No. of setbits are:%u\n",r);
    return 0;
}
