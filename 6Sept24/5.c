//Pointer Arrays:

//Create an array of pointers to strings and sort the strings using a custom comparison function.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort_asc(char **arr,int n)
{
	int i,j;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(arr[j],arr[j+1])>0)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	char **arr=(char **)malloc(n*sizeof(char *));
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		arr[i]=(char *)malloc(20*sizeof(char));
		scanf("%s",arr[i]);
	}
	printf("Character array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",arr[i]);
	}
	sort_asc(arr,n);
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
        {                                                                                                                                                                                                                       printf("%s\n",arr[i]);
        }
	for(i=0;i<n;i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}
