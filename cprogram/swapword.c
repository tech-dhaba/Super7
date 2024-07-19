#include<stdio.h>
#include<string.h>
void swap(char a[])
{	
	int l =strlen(a);
	int i,la;
	la =l;
	for(int j=l-1;j>=0;j--)
	{
		
		if(a[j]==' '){
		for(int k=j;k<=la;k++)
		{ printf("%c",a[k]);}
		la=j;}
	}
}
int main(int argc,char *argv[])
{
        printf("%s ",argv[0]);
        printf("%s",argv[1]);
	char c[]=" hi my name is tejsaw";
	swap(c);
	char *a[]={"hello","world"};
        printf("%s %s",a[0],a[1]);
	return 0;
}
