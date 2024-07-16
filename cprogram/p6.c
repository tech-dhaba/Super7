#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(int *c,int len)
{
	int i,j;
	for(i =0,j=len-1;i<len/2,j>len/2;i++,j--)
	{
		int t=c[i];
		c[i]=c[j];
		c[j]=t;
	}
	printf("\nThe reversed array = ");
	for(int k=0;k<len;k++)
	{printf("%d, ",c[k]);}
}
int largest(int * a,int len)
{
	int l=a[0];
	for(int i =0;i<len;i++)
	{	
		if(l<a[i])
		{ l=a[i]; }
	}
return l;
}
void duplicate(int *a,int len)
{
	for(int i=0;i<len;i++)
	{
		int c=a[i];
		for(int j=i+1;j<len;j++)
		{	
			if(c==a[j])
			{
				a[j]=0;
			}
			else
			{
				continue;
			}	
		}
	
	}
	int k =0;
	while(k<len)
	{printf(" %d, ",a[k]);k++;	}
}
void search(int *a,int x)
{
int p; 
	for(int i=0;i<sizeof(a);i++)
	{
		if(x==a[i])
		{	p=i; break;}
	}
	printf("Index = %d",p);
}
int main()
{
	printf("Enter the rray \n");
	int *a=(int*)malloc(15*sizeof(int));
	for(int i=0;i<15;i++)
	{
		scanf("%d",&a[i]);
	}
int l = largest(a,15);
reverse(a,15);
//printf("\nAfter removing Duplicates = ");
search(a,5);
//duplicate(a,15);
//printf("\nLargest element = %d\n",l);
	
}	
