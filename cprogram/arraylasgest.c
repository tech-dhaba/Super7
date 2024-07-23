#include<stdio.h>

int lar(int a[],int l)// function to find the largest
{
	int largest=a[0];
	for(int i=0;i<l;i++)// looping for finding largest no. 
	{
		if(a[i]>largest)// comparing for finding largest
		{largest =a[i];}
	}
	return largest;	// returning the largest
}
int main(void)
{
	printf("Enter the array size:\n");
	int n;
	scanf("%d",&n);// taking size as a input of a user
	int a[n];
	for(int i=0;i<n;i++)// for loop for taking input of array element 
	{
		scanf("%d",&a[i]);
	}
	int largest =lar(a,n);// finding the largest
	printf("largest no.= %d",largest);// printing the largest
}
