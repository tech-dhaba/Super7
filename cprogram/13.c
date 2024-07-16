#include<stdio.h>

#define debug 1

#if debug
#define debugprint(x) printf("debug = %d",x)
#else 
#define debugprint(x)
#endif
int main()
{
	int x=0;
	debugprint(x);
	return 0;
}
