//Write a function that determines the parity (even or odd number of set bits) of a number using bitwise XOR.
#include<stdio.h>
void ct(int n)
{
	int len,i;
	len=sizeof(n)*8;
	int count=0;
	for(i=0;i<len;i++)
	{
		if(n&1)
		{
			count++;
		}
		n=n>>1;
	}
	printf("Count is:%d\n",count);
	if((count^1)<count)
	{
		printf("No. is of odd parity");
	}
	else
	{
		printf("No. is of even parity");
	}

}
int main()
{
	int n;
	printf("Enter no.:");
	scanf("%d",&n);
	ct(n);
	return 0;
}
