//Write a function that takes an integer array and its size as arguments and returnsthe largest element in the array. Write a program to test this function.
#include<stdio.h>
int lar( int arr[],int n)//Function declaration
{
	int i,max=0;//Function definition
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int arr[20]={1,3,4,5,7,4,9};//already taken array
	int size=(sizeof(arr)/sizeof(int));//detrmining the size of array
	printf("largest no. is:%d\n",lar(arr,size));//Function calling
	return 0;
}


