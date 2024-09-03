//Multiplication of Two Matrices
//Problem Statement:
//Write a C program to dynamically allocate two 2D arrays of size m x n and n x p, take input for both arrays, multiply them, and print the resulting matrix.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,i,j;
	printf("Enter no. of rows:\n");
	scanf("%d",&m);
	printf("Enter the no. of rows:\n");
	scanf("%d",&n);
	int **array1=(int**)malloc(m*sizeof(int*));
	int **array2=(int**)malloc(m*sizeof(int*));
	int **result=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
	{
		array1[i]=(int*)malloc(n*sizeof(int));
		array2[i]=(int*)malloc(n*sizeof(int));
		result[i]=(int*)malloc(n*sizeof(int));
	}
	//input for array1
	printf("enter elements for array1:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&array1[i][j]);
		}
	}
	//input for array2
	 printf("enter elements for array2:\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&array2[i][j]);
                }
        }
	  //array1
        printf("array1:\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d ",array1[i][j]);
                }
		printf("\n");
        }
        //array2
         printf("array2:\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d ",array2[i][j]);
                }
		printf("\n");
        }
	//multiplication
	//
	return 0;
}
