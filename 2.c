//2. Counting Set Bits:
//Write a function to count the number of set bits in an integer.
#include<stdio.h>
void setbits(int x)
{
	int i,count=0;
	int size=8*sizeof(x);
	for(i=0;i<size;i++)
	{
		if(x&1)
		{
			count++;
		}
		x>>=1;
	}
	printf("Total no. of setbits are:%d\n",count);
}
int main()
{
	int x;
	printf("Enter no.:\n");
	scanf("%d",&x);
	setbits(x);
}
