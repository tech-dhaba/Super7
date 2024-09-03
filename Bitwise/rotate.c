//Write a function to rotate the bits of an integer to the left by n positions. For example, rotating 0b1011 left by 2 positions should result in 0b1110.
//for 32 bits i.e 4 bytes
#include<stdio.h>
#include<math.h>
int func(int x,int n)
{
	int size=sizeof(x)*8;
	int r,y=x;
	x=x<<n;
	y=x>>(size-n);
	r=x|y;
	return r;
}
int main()
{
	int x,n;
	printf("Enter no. whose rotation is to be done:\n");
	scanf("%d",&x);
	printf("Enter value of position:\n");
	scanf("%d",&n);
	int size=sizeof(x)*8;
	printf("size %d\n",size);
	printf("No. after rotation is:%d\n",func(x,n));
	return 0;
}
//for significant bits
/*#include<stdio.h>
#include<math.h>
int bit_size(int val)
{
	int cnt=0;
	while(val>0)
	{
		cnt++;
		val=val>>1;
	}
	return cnt;
}
unsigned int rotate(unsigned int num,int n)
{
	int size=bit_size(num);
	n=n%size;//to check if n is within the range of num
	unsigned int x,y,r;
	x=x<<n;
	y=y>>(size-n);
	r=x|y;
	return r;
}
int main()
{
	unsigned int num;
	int n;
	printf("Enter no. to be rotated:\n");
	scanf("%u",&num);
	printf("Enter position:\n");
	scanf("%d",&n);
	int s=rotate(num,n);
	printf("No. after rotation is:%u\n",s);
	return 0;
}*/
