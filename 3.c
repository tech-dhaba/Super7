//3. Reversing Bits:
//Reverse the order of bits in an integer.
#include<stdio.h>
void reverse(unsigned int x)
{
	int i;
	int size=8*sizeof(x);
	int rev=0;
	for(i=0;i<size;i++)
	{
		if(x&1)
		{
			rev|=1<<(size-i-1);
		}
		x>>=1;
	}
	printf("Number after reversing is:%u\n",rev);
}
int main()
{
	unsigned int x;
	printf("Enter number:\n");
	scanf("%u",&x);
	reverse(x);
}
