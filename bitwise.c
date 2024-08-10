#if 0
//Que.1. Write a function to rotate the bits of an integer to the left by n positions. For example, rotating 0b1011 left by 2 positions should  result in 0b1110
#include<stdio.h>
unsigned rotate_bit(unsigned value,int n)
{
	int len = sizeof(value)*8;
	return (value >> (len-n))|(value << n);
}
int main()
{
	unsigned a = 0xAABBCCDD;
	int shift = 8;
	unsigned result = rotate_bit(a,shift);
	printf("%X",result);
	return 0;
}

#elif 0
//Que.2. Write a function that counts the number of set bits (1s) in an integer. For instance, 0b1011 should have 3 set bits.
#include<stdio.h>
int count_set_bit(int num)
{
	int count = 0;
	int len = sizeof(num)*8;
	for(int i=0 ; i<len ; i++)
	{
		if(num&1)
		{
		count++;
		}
		num=num>>1;
	}
	return count;
}
int main()
{
	int n;
	printf("Enter any integer : ");
	scanf("%d",&n);
	printf("%d",count_set_bit(n));
	return 0;
	
}



#elif 0
//Que.3.
//Write a function that checks if a given integer is a power of two using bitwise operations. For example, 16 is a power of two, but 18 is not.
#include<stdio.h>
int pwr_2(int num)
{
	int count = 0;
	int len = sizeof(num)*8;
	for(int i=0 ; i<len ; i++)
	{
		if(num&1)
		
		{
			count = count + 1;
		}
		num = num>>1;
	}
	if(count==1)
	{
		printf("The number is power of 2");
	}
	else
	{
		printf("The number is not power of 2");
	}
}
int main()
{
	int n;
	printf("Enter any integer : ");
	scanf("%d",&n);
	printf("%d",pwr_2(n));
	return 0;
}






























#else
#endif
