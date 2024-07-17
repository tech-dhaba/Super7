#include<stdio.h>
#include<math.h>
int swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()

{	
	int a[5]={1,2,3,4,5};
	int *p,i,n;
	n=sizeof(a)/sizeof(int);
	printf("%d\n",n);
	p=a;
	printf("Array is");
	for(i=0;i<n;i++)
        {
                printf("%d\n",*(p+i));
        }
	for(i=0;i<n/2;i++)
	{
		swap(&a[i],&a[n-i-1]);
		
	}
	printf("Reverse array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	int b=2;
	printf("position for reverese array is:\n");
	for(i=0;i<n;i++)
	{
		if (a[i]==b)
		{
			//printf("%d\n",a[i]);
			printf("%d\n",i);
			break;
		}

	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		a[i]=2<<a[i];
	}
	for(i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }

	return 0;
}
