#include<stdio.h>
void input_array(int array[],int size)
{
	printf("Enter %d element : \n",size);
	for(int i=0 ; i<size ; i++)
	{
		printf("Element %d : Index[%d] :",i+1,i);
		scanf("%d",&array[i]);
	}
}
void print_array(int array[],int size)
{
	printf("Array elements are:\n");
	for(int i=0 ; i<size ; i++)
	{
		printf("%d",array[i]);
	}
	printf("\n");
}
	
int range(int array[],int index1, int index2, int size)
{
	if(index1<0)
	{
		printf("Invalid range");
		return;
	}
	else if(index2>size)
	{
		printf("Invalid range");
		return;
	}
	else if (index1 == index2)
	{
		printf("Invalid range");
		return;
	}
	int max=array[0];
	printf("Max : ");
	for(int i=index1 ; i<=index2 ; i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}	
		printf("%d\n", max);
	int min=array[2];
	printf("Min : ");
	for(int i=index1 ; i<index2 ; i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("%d",min);
} 
int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	input_array(arr,size);
	print_array(arr,size);
	int index1;
	int index2;
	printf("Enter the Index value 1 : ");
	scanf("%d",&index1);
	printf("Enter the Index value 2 : ");
	scanf("%d",&index2);
	range(arr,index1,index2,size);
	return 0;
}
