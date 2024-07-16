// reverse a string 
#include <stdio.h>
#include <string.h>
void reverse(int* s,int len)
{
int *ptr;
for(int i=0;i<len;i++)
{
	ptr=(int*)s[i];
	printf("%d",ptr);
}
int l =0;
int r =len-1;
int c;
while(l<r)
{
 c=s[l];
s[l]=s[r];
s[r]=c;
l++;r--;
}
}	

 int main()
{
int c[]={1,2,3,4,5,6};
//gets(c);
//fgets(c,50,stdin);
//read(1,c,50);
reverse(c,sizeof(c));
//printf("%s",c);
return 0;
}

