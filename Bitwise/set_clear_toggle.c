#include<stdio.h>
#include<stdint.h>
void setBit(uint32_t *n, int pos)
{
	*n|=(1<<pos);
	printf("Setbit no. is:%u\n",*n);
}
void clearBit(uint32_t *n, int pos)
{
	*n&=~(1<<pos);
	printf("Clearbit no. is:%u\n",*n);
}
void toggleBit(uint32_t *n, int pos)
{
	*n^=(1<<pos);
	printf("Togglebit no. is:%u\n",*n);
}
int main()
{
	int n,p;
	printf("Enter number on which operations are to be performed:\n");
	scanf("%d",&n);
	printf("Enter position:\n");
	scanf("%d",&p);
	setBit(&n,p);
	clearBit(&n,p);
	toggleBit(&n,p);
	return 0;
}

