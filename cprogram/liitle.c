#include<stdio.h>
int main()
{
	int x=56;
        if(*(char*)& x !=56) printf("little endian");
        else  printf("big endian");	
	return 0;
}
