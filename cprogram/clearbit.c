#include<stdio.h>
 int clearBit(int x, int n) {
    
    int mask = ~(1 << n);
    int result = x & mask;
    return result;	
}
int main()
{
	int c=clearBit(15,2);
	printf("%d\n",c);
}
