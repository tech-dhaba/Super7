//Question 3: Transpose of a Matrix                                  //Problem Statement:                                                 //Write a C program to dynamically allocate a 2D array of size m x n, take input for the array, compute its transpose, and print the transposed matrix.
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n,m,i,j;
        printf("Enter the no. of rows:\n");
        scanf("%d",&m);
        printf("Enter the no. of columns:\n");
        scanf("%d",&n);
        //Allocate memory
        int **array=(int**)malloc(m*sizeof(int*));
        int **result=(int**)malloc(m*sizeof(int*));
        for(i=0;i<m;i++)
        {
                array[i]=(int*)malloc(n*sizeof(int));
                result[i]=(int*)malloc(n*sizeof(int));
        }
        //inputs for the array
        printf("Enter elements for array:\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&array[i][j]);
                }
	}
	printf("Array is:\n");
	for(i=0;i<m;i++)
        {
                for(j=0;j<m;j++)
                {
                        printf("%d ",array[i][j]);
                }
                printf("\n");
        }
	 //transpose
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        result[i][j]=array[j][i];
                }
        }
        //print
        printf("Transpose of the matrix is:\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<m;j++)
                {
                        printf("%d ",result[i][j]);
                }
                printf("\n");
        }
        //free the allocated memory
        for(i=0;i<n;i++)
        {
                free(array[i]);
                free(result[i]);
        }
        free(array);
        free(result);
        return 0;
}
  
