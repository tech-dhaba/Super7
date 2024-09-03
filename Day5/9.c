//Write a function that checks if two numbers differ by only one bit type 1 for same bits
#include<stdio.h>
void check(int n1, int n2)
{
	int r,len,i;
	r=n1^n2;
	len=sizeof(r)*8;
	int count=0;
	while(r!=0)
	{
		if(r&1)
		{
			count++;
		}
		r=r>>1;
	}
	if(count==1)
	{
		printf("No. has one bit difference");
	}
	else if(count>1)
	{
		printf("No. has more than one bit different");
	}
	else
	{
		printf("No. has no bit difference");
	}
}
int main()
{
	int n1,n2;
	printf("Enter 2 nos.\n");
	scanf("%d %d",&n1,&n2);
	check(n1,n2);
	return 0;
}
