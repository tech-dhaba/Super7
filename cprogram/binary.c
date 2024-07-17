#include<stdio.h>
int binary(int *a,int high,int low,int target)	
{
	if(low>high)
	{
		return -1;
	}
	int mid= low +(high-low)/2;
	 if(a[mid] == target)
	{
		return mid;
	}
	else if (a[mid]>target)
	{		
		return binary (a,mid -1,low,target);
	}
	else
	{
		return binary(a,high,mid+1,target);
	}
}
int main(void)
{
	int a[]={2,3,4,5,6,7,8,9,10};
	int x=7;
	int len =(sizeof(a)/sizeof(int))-1;
	int index=binary(a,len,0,x); 
	printf("INDEX = %d\n",index);
	return 0;
}
