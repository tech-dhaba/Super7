//10. Generate All Subsets Using Bitwise Operations
//Write a function to generate all subsets of a set represented by a bitmask. For example, if the bitmask is 0b101, it represents the set {0, 2}.
#include<stdio.h>
void subset(int num)
{
	int i,cnt1=0,cnt0=0;
	int size=sizeof(num)*8;
	for(i=0;i<size;i++)
	{
		if(num&1)
		{
			cnt1++;
		}
		else
		{
			cnt0++;
		}
		num>>=1;
	}
	printf("The subest is:{%d,%d}\n",cnt0,cnt1);
}
int main()
{
	int n;
	printf("Enter no. whose subset is to be found:\n");
	scanf("%d",&n);
	subset(n);
	return 0;
}
