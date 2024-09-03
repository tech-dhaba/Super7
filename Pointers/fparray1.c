//Create a program in C that uses an array of function pointers, where each function performs a different arithmetic operation (addition, subtraction, multiplication, division). Write a function that takes a pointer to this array of function pointers and the number of elements in the array, and allows the user to select which operation to perform.
#include<stdio.h>
int add(int *arr,int n)
{
	int i,m;
	//printf("Enter number to be added:\n");
	//scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i]+4;
	}
	return arr[i];
}
int sub(int *arr,int n)
{
	int i,m;
//	printf("Enter number to be subtracted:\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i]-m;
	}
	return arr[i];
}
int mul(int *arr,int n)
{
        int i,m;
        printf("Enter number to be multiplies with:\n");
        scanf("%d",&m);
        for(i=0;i<n;i++)
        {
                arr[i]=arr[i]*m;
	}
        return arr[i];  	                                                                                                                           
}
int div(int *arr,int n)
{
        int i,m;
        printf("Enter number to be divided with:\n");
        scanf("%d",&m);
        for(i=0;i<n;i++)
        {
		if(arr[i]>m)
		{
			arr[i]=arr[i]/m;
		}
		else
		{
			printf("Division is not possible\n");
		}
	}
        return arr[i];                                                                                                                                      }
int operation(int *arr,int n,int *callback(int*,int))
{
	for(int i=0;i<n;i++)
	{
		callback(arr,n);
	}
}
int main()
{
	int arr[20],n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Addition of array is:\n");
//	operation(arr,n,add);
	for(i=0;i<n;i++)
	{
		printf("%d\n",operation(arr,n,add));
	}
	return 0;

}
