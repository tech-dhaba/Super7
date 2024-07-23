#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="mytej 27";
	int vow=0,cons=0,digit=0,space=0;
	int l =strlen(a);
	for(int i=0;i<l;i++)
	{
		if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='e'||a[i]=='u')
		{ vow+=1;}
		else if(a[i]==' ')
		{ space+=1;}
		else if(a[i]== '1' ||a[i]== '2'||a[i]== '3'||a[i]== '4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='0') 
		{digit+=1;}
		else 
		{ cons+=1;}
	}
	printf("no of vowel = %d\n",vow);
	printf("no of consonant = %d\n",cons);
	printf("no of space = %d\n",space);
	printf("no of digit = %d\n",digit);
}
