//2-d array dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n,m;
        printf("Enter the number of element of n: ");
        scanf("%d",&n);
        printf("Enter the number of element of m: ");
        scanf("%d",&m);
        int *array = (int*)malloc(n*m* sizeof(int));
        if(array == NULL)
        {
                printf("Memory allocation failed");
                return 1;
        }
        for(int i = 0; i<n ; i++)
        {
                printf("\n");
                for(int j=0 ; j<m ; j++)
                        {

                                printf("i j [%d] [%d] \t",i,j);
                                *(array+i+j)=i+j+1;
                                printf("%d\t",*(array+i+j));
                        }
        }
printf("\n");
free(array);
return 0;
}
