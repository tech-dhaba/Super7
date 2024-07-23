#include<stdio.h>
int main()
{
	int n ,sum=0;float ar;
	printf("Enter the no of subjects\n");
	scanf("%d",&n);
	int marks[n];
	printf("enter the grades");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
		sum =sum +marks[i];
	}
	ar=sum/n;
	printf("the average =%f",ar);
}
