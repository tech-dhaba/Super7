#include<stdio.h>
#include<math.h>

int factorial(int num)
{
    if(num==1)
    {
        return 1;
    }
    return num*factorial(num-1);
}
int main()
{
    int n;
    printf("Enter the num:");
    scanf("%d",&n);
   // factorial(n);
    printf("%d",factorial(n));
    return 0;
}
