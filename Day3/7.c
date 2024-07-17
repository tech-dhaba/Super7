//Write a C program to declare a 2D array (matrix) with dimensions m (rows) and n (columns), where m and n are provided by the user.
//Write a C program to access and print a specific element in a 2D array using row and column indices.
//Write a C program to access and print a specific element in a 2D array using row and column indices.
#include<stdio.h>
int main()
{
	int n,m,i,j;
	printf("Enter no. of rows and column:\n");
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter values for [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Array is:\n");
	for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        printf("%d ",a[i][j]);
                }
		printf("\n");
        }
	return 0;
}
