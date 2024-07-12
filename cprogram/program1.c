// reverse a string 
#include <stdio.h>
#include <string.h>
void reverse(char* s,int len)
{
int l =0;
int r =len-1;
char c;
while(l<r)
{
 c=s[l];
s[l]=s[r];
s[r]=c;
l++;r--;
}
puts(s);
}	

 int main()
{
char c[]="tejsaw bhasker";
//gets(c);
//fgets(c,50,stdin);
//read(1,c,50);
reverse(c,sizeof(c));
//printf("%s",c);
return 0;
}

