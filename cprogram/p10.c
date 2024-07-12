#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int (*comp)(const void*,const void*);
int cmp(char **str1,char **str2)
{
//	const 
	return strcmp(str1,str2);
}
int main()
{
	char *arr[]={"tejsaw","shivam"};
	//int n = sizeof(arr)/sizeof(arr[0]);
        int n=sizeof arr;
        int m=sizeof arr[0];
	printf("%d",n);
	printf("%d",m);
	qsort(arr,2,8,cmp);
	for(int i =0;i<2;i++)
	{
		printf("%s\n",arr[i]);
	}
return 0;
}
