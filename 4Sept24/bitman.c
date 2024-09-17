//Set, clear, and toggle specific bits.
//Check if a bit is set.
//Count the number of set bits.
//Reverse the bits of a number.
//Swap the nibbles of a number.
#include<stdio.h>
void set(int num,int pos)
{
	int n;
	n=num|(1<<pos);
	printf("set bit changed no. is:%d\n",n);
}
void clear(int num,int pos)
{
	int n;
	n=num&~(1<<pos);
	("clear bit changed no. is:%d\n",n);
}
void toggle(int num,int pos)
{
	int n;
	n=num^(1<<pos);
	("toggling bit changed no. is:%d\n",n);
}
void check(int num,int pos)
{
	if(num&(1<<pos)==1)
	{
		printf("It is setbit\n");
	}
	else
	{
		printf("It is not a setbit\n");
	}
}
void reverse(int num)
{
	int i,rev=0;
	int size=sizeof(num)*8;
	for(i=0;i<size;i++)
	{
		if(num&1)
		{
			rev|=(1<<(size-i-1));
		}
		num>>=1;
	}
	printf("Reverse no. is:%d\n",rev);;
}
/*void swap(int num)
{//for 8 bits i.e 1 byte
	int i,m1=0,m2=0,m3=0,m4=0,n=0;
	n=num;
	int size=sizeof(num)*8;
	for(i=0;i<size;i++)
	{
		if(i<4)
		{
			if(num&1)
			{
				m1|=(1<<(8-1-i));
			}
		}
		else if((i>8)&&(i<12))
		{
			if(num&1)
			{
				m2|=(1<<(16-1-i));
			}
		}
		else if((i>16)&&(i<20))
		{
			if(num&1)
			{
				m3|=(1<<(24-1-i));
			}
		}
		else if((i>24)&&(i<28))
		{
			if(num&1)
			{
				m4|=(1<<(size-1-i));
			}
		}
		num>>=1;
	}
	num>>=4;
	num|=m1;
	num|=m2;
	num|=m3;
	num|=m4;
	printf("Swapped nibble output is:%d\n",num);
}*/
void swap(int num)
{
    // Mask and swap the lower and upper nibbles of the byte
    int swapped_num = ((num & 0x0F) << 4) | ((num & 0xF0) >> 4);
    printf("Swapped nibble output is: %d\n", swapped_num);
}
int main()
{
	int n,p;
	printf("Enter no.:\n");
	scanf("%d",&n);
	printf("Enter position:\n");
	scanf("%d",&p);
	set(n,p);
	clear(n,p);
	toggle(n,p);
	check(n,p);
	reverse(n);
	swap(n);
	return 0;

}
