//9. Binary Representation Comparison
//Write a function to determine if two integers have the same binary representation when leading zeros are ignored. For example, 0b101 and 0b0101 should return true.

/*#include<stdio.h>
int main()
{
    int ptr=3000;
    int *x=ptr++;
    int *y=++ptr;
    printf("%d",*x);
    printf("%d",*y);

}*/
#include<stdio.h>
#include<stdbool.h>
bool same(int x,int y)
{
	while(x!=0||y!=0)
	{
		if((x&1) != (y&1))
		{
			return false;
		}
		x>>=1;
		y>>=1;
	}
	return true;
}
int main()
{
	int n,m;
	printf("Enter 2 integers:\n");
	scanf("%d%d",&n,&m);
	if(same(n,m))
	{
		printf("They have same bimary representation");
	}
	else
	{
		printf("They don't have same binary representation");
	}
	return 0;
}

