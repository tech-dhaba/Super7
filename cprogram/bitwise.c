#include<stdio.h>
//1
void iseven(int n)
{
	if((n & 1)==0)// checks if the lsb is zero if zero number is even if not number is odd 
	{	printf("the number is even");	}
	else
	{	printf("the number is odd");	}
}
//2
void isodd(int n )
{
	if((n^1)==(n-1)) // checks the lsb of the number if 1 its odd
	{	printf("odd\n"); }
	else
	{	printf("even\n"); }
}
//3
int setlsbone(int n)// to set lsb one
{
	return n|1;
}
//4
unsigned int maskingmsd( unsigned int n )// to set msb zero
{
	unsigned int mask = ~(1<<(sizeof(unsigned int)* 8-1));
	return (n & mask) ;
}
//5
void swap(int a,int b)// swap using xor
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("no after being swaped = %d,%d",a,b);
}
//6
int countsetbits(int num )//count set bits 
{
	int count=0;
	while(num!=0){
	count+= num & 1;
	num >>=1;}
	return count;
}
//7
int ispower(unsigned int num )// to find the power of 2 using bitwise
{
	return ((num>0)&&(num &(num-1)==0));
}
//8
int positionofmsb(int num)// to find the postion of right most set bit
{
	int position =0;
	while (num!=0)
	{
		if(num&1==1){
		return position ;}
		else 
		{ position++; num<<=1;}	
	}
}
//9
int oppositesign(int x,int y)// checks if the number are opposite sign

{
	int c;
	if((x^y)<0){ 
	return 1;}
	else	{
	return 0;}
}
//10
int parity(int num)// checks the parity of a number 
{
	
	int count=0;
	while(num!=0){
	count+= num & 1;
	num >>=1;}
	if((count &1)==0){
	return 1;}
	else {
	return 0;}
}
//11
unsigned int extract(int x,int y,unsigned int num)
{
    int width = y- x + 1;
    unsigned int mask = (1 << width) - 1;
    mask <<= x;
    unsigned int result = (num & mask) >> x;
    return result;
	
}
//12
int equals(int num1,int num2)
{
	return !(num1^num2);
}
//13
int greater(int num1,int num2)
{
	if(positionofmsb(num1)>positionofmsb(num2))
	{return num1;}
	else if(positionofmsb(num1)<positionofmsb(num2))
	{return num2;}
	else
	{
		if(countsetbits(num1)>countsetbits(num2))
	  	{ return num1;}
		else 
		{ return num2;}
		
	}
}
int min(int num1 ,int num2)
{
	if(positionofmsb(num1)<positionofmsb(num2))
	{return num1;}
	else if(positionofmsb(num1)>positionofmsb(num2))
	{return num2;}
	else
	{
		if(countsetbits(num1)<countsetbits(num2))
	  	{ return num1;}
		else
		{return num2;} 
	}
}
int main(void)
{
	int c=greater(6,7);
	{printf("maximum no %d\n",c); }
	return 0;
}

























