// Write a C program that reads a list of strings from the user, sorts them in alphabetical order using double pointers, and prints the sorted list.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char **arr,int n)
{
	char *temp;
	printf("The sorted array is:\n");
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(arr[i],arr[j])>0)
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",arr[i]);
	}
}
int main()
{
	int n,m,i,j;
	printf("Enter the no. of strings:\n");
	scanf("%d",&n);
	printf("Enter size of string:\n");
	scanf("%d",&m);
	char **str=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
		str[i]=(char*)malloc(m*sizeof(char));
	}
	printf("Enter string:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		
	}
	printf("array of string is:\n");
	for(i=0;i<n;i++)
        {
                printf("%s\n",str[i]);     
        }
	sort(str,n);
	for(i=0;i<n;i++)
	{
		free(str[i]);
	}
	free(str);
	return 0;
}
