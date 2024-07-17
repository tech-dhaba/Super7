// Write a C program to traverse a 2D array in row-major order (visit each row completely before moving to the next) using pointers.
#include<stdio.h>

int main()
{
	int n,m,i,j;
	printf("Enter the values for rows and columns:\n");
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("Enter values for a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("array is:\n");
	for(j=0;j<m;j++)
        {
                for(i=0;i<n;i++)
                {
                        printf("%d ",a[i][j]);
                }
		printf("\n");
        }
	return 0;
}
