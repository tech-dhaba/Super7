//Write a function that checks if a number is a power of 2 using bitwise operations.
#include<stdio.h>
void pw(int n)
{
        int len=sizeof(n)*8;
        int i,ct=0;
        for(i=1;i<len;i++)
        {
                if(n&1)
                {
                        ct++;
                }
		n=n>>1;
        }
	if(ct==1)
	{
		printf("No. is of power 2");
	}
	else
	{
		printf("No. is not of power of 2");
	}
}
int main()
{
        int n;
        printf("Enter no.:\n");
        scanf("%d",&n);
        pw(n);
        return 0;
}
