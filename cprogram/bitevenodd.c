#include<stdio.h>
void check(int n)
{
        if((n & 1)==0)// checks if the lsb is zero if zero number is even if not number is odd
        {       printf("the number is even\n");   }
        else
        {       printf("the number is odd\n");    }
}
int main()
{
	int n =23;
	check(n);
	n=24;
	check(n);
}
