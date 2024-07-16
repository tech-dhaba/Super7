#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef int (*comp)(const void*,const void*);
int cmp(char **str1,char **str2)
{
	const char* s1= *(const char**)str1;  
	const char* s2= *(const char**)str2;  
	return strcmp(s1,s2);
}
int main()
{
	char *arr[]={"tejsaw","shivam"};
	int n = sizeof(arr)/sizeof(arr[0]);
        //int n=sizeof arr;
       // int m=sizeof arr[0];
//	printf("%d",n);
//	printf("%d",m);
	qsort(arr,n,8,cmp);
	for(int i =0;i<2;i++)
	{
		printf("%s\n",arr[i]);
	}
return 0;
}
