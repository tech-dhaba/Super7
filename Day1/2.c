#include<stdio.h>
int main()
{
	int abc = 0X0001;
	char *char_ptr = (char *)&abc;

	if (*char_ptr & 0x1)
	{
		printf("\n Little Endian");
	}
	else
	{
		printf("\n Big Endian");
	}
	return 0;
}

