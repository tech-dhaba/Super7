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
void ispower(int num )// to find the power of 2 using bitwise
{
	int count=0;int pos=1;
	while(num!=0)
	{
		if(num&1)
		 {count+=1;}
		pos++;num>>=1;	
	}
	if(count==1&&pos!=1)
	{printf("Is a pwer of 2");}
	else
	{ printf("not a power of 2");}
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
		{ position++; num>>=1;}	
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
int sumofpositionofsetbit(int num)
{
	int count=0;int position=1;
	while(num!=0)
	{
		if(num & 1)
		{count = count +position; }
		num>>=1;
		position++;
	}
	return count;	
} 
//14
int greater(int num1,int num2)
{
	if(sumofpositionofsetbit(num1)>sumofpositionofsetbit(num2))
	{ return num1; }
	else 
	{return num2;}
	
}
int min(int num1 ,int num2)
{
	
	if(sumofpositionofsetbit(num1)>sumofpositionofsetbit(num2))
	{ return num2; }
	else 
	{return num1;}
	
}
int main(void)
{
	int c=greater(29,28);
	printf("maximum no %d\n",c);
	ispower(8);
	int t = positionofmsb(32);
	printf("position %d\n",t);
	return 0;
}

























