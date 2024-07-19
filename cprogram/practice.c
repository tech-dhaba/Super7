#include<stdio.h>
#include<string.h>
void swap(char s[])
{
	int l = strlen(s);
	for(int i=0;i<l/2;i++)
	{
		char c= s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=c;
	}
	puts(s);
}
void swapwords(char s[])
{
	int l = strlen(s);
	char a[l];int p;int i=0;
	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
		 {
			p=i;
			break;
		 }
		else
		{a[i]=s[i];
		}
	}
        for(i=p;i<l;i++)
	{
		printf("%c",s[i]);
	}
	i=0;
	for(i=0;i<p;i++)	
	{
		printf("%c",a[i]);
	} 
}
int main(void)
{
	char c[]="hello world";
	swap(c);
	char a[]= "tejsaw bhasker";
	swapwords(a);
}
