//Write a function that finds the position of the rightmost set bit in a number.
#include<stdio.h>
int pos(int n)
{
	int i,count=-1;
	int len=sizeof(n)*8;
	for(i=0;i<len;i++)
	{
		if(n&1)
		{
			count++;
			break;
		}
		else
		{
			count++;
		}
		n=n>>1;
	}
	return count;
}
int main()
{
	int n;
	printf("Enter no.:\n");
	scanf("%d",&n);
	printf("Rightmost bit is at position:%d\n",pos(n));
	return 0;
}
