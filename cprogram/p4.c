#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
bool lenght(char c[])
{
	int a = strlen(c);
	if(a>15)
	{
		return false;
	}
	else
	{	
	  	return true;
	}		
}
bool upper(char c[])
{
	int a = strlen(c);
	for(int i = 0 ;i<a;i++)
	{

		if(isupper(c[i]))
		   return true; 
	}
	return false;
}
bool lower(char c[])
{
	int a=strlen(c);
	for(int i =0;i<a;i++)
	{
		if(islower(c[i]))
		{ return true; }
			
	}
	return false;
}
bool digit(char c[])
{
	int a = strlen(c);
	for(int i =0;i<a;i++)
	{
		if(isdigit(c[i]))
		 {return true;}
	}
	return false;
}	
		
int main()
{
	char c[50];
	printf("Enter the passcode =");
	fgets(c,50,stdin);
        bool a = lenght(c);
	bool b = upper(c);
	bool d = lower(c);
	bool e = digit(c);
        if(a && b && d && e)
	{ printf("The passcode is valid\n");}
	else
	{ printf("The passcode is invalid\n");}

}
