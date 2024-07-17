//Write a function to print maximum and minimum no.
#include<stdio.h>
int main()
{
	int a[50],n,*p,i;
	p=a;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("enter values for array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is:\n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",*(p+i));
        }
	printf("maximum no. is: \n");
	int min=a[0], max =0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			
		}
		
	}
	printf("%d\n",max);
	printf("Minimum value is:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
			
		}
		
	}
	printf("%d\n",min);

	return 0;
}
