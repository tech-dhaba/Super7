#include<stdio.h>
int convert(char *str)
{
	int res=0,sign=1;
	if(*str==' -')
	{
		sign=-1;
		str++;
	}
	while(*str!='\0')
	{
		if(*str>='0' && *str<='9')
		{
			res=res*10+(*str -'0');
		}
		else
		{
			return 0;
		}
		str++;
	}
	return res*sign;
}
int main(int argc,char **argv)
{
	int i,c=0;
	printf("%d\n",argc);
	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
		c=c+convert(argv[i]);
	}
	printf("%d",c);
	return 0;
}
