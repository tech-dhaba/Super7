//Question 2: Matrix Addition
//Problem Statement:
//Write a C program to dynamically allocate two 2D arrays of size m x n, take input for both arrays, add them, and print the resulting matrix.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,i,j;
	printf("Enter the no. of rows(m):\n");
	scanf("%d",&m);
	printf("Enter the no. of columns(n):\n");
	scanf("%d",&n);
	//Allocate memory for the 2D arrays
	int **array1=(int**)malloc(m*sizeof(int*));
	int **array2=(int**)malloc(m*sizeof(int*));
	int **result=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
	{
		array1[i]=(int*)malloc(n*sizeof(int));
		array2[i]=(int*)malloc(n*sizeof(int));
		result[i]=(int*)malloc(n*sizeof(int));
	}
	//Input elements for the first array
	printf("Enter elements for the first array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&array1[i][j]);
		}
	}
	//Inputs elements for the second array
	printf("Enter elements for the second array:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&array2[i][j]);
			}
		}
	//add 2 arrays
        for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			result[i][j]=array1[i][j]+array2[i][j];
		}
	}
	//printing the result
	printf("Result is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	// Free the allocated memory
	free(array1);
	free(array2);
	free(result);
	return 0;
}
