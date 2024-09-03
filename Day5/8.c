//Write a function that rotates the bits of a number a certain number of positions to the left or right.
#include<stdio.h>
int left_rotate(unsigned num,int rot)
{
	int len=sizeof(num)*8;
	rot=rot%len;
	num=(num<<rot)|(num>>(len-rot));
	return num;
}
int right_rotate(unsigned num,int rot)
{
        int len=sizeof(num)*8;
	rot=rot%len;
        num=(num>>rot)|(num<<(len-rot));
        return num;
}
int main()
{
	unsigned n;
	int d,type;
	printf("Enter no.\n");
	scanf("%u",&n);
	printf("Enter no. of rotations:\n");
	scanf("%d",&d);
	printf("Left rotation is:%u\n",left_rotate(n,d));
	printf("Right rotation is:%u\n",right_rotate(n,d));
	return 0;
}
