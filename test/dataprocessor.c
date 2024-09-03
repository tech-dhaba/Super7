//Question 3: Consider the following structure: typedef struct {
//    int data;
//    void (*processData)(int *);
//} DataProcessor; Write a program that implements multiple functions to process the data field of DataProcessor (e.g., incrementing, squaring, etc.). The program should dynamically assign one of these functions to the processData function pointer and then execute it. Demonstrate the use of this structure with different function pointers.
#include<stdio.h>
typedef struct Dataprocessor
{
	int data;
	void (*processData)(int *);
	void (*print)(int *);
}Dataprocessor;
void increment(int *data)
{
	(*data)++;
	printf("Increment value is:%d\n",*data);
}
void square(int *val)
{
	(*val)*=(*val);
	printf("Squared value is:%d\n",*val);
}
void hexadecimal(int *num)
{
	printf("hexadecimal no. is:%x\n",*num);
}
void binary(int *value)
{
	int i,d,size=sizeof(*value)*8;
	printf("No. in binary is:\n");
	for(i=0;i<size;i++)
	{
		int bit = (*value >> (size - 1 - i)) & 1;
		printf("%d",bit);
		
	}
}
int main()
{
	Dataprocessor D1,D2;
	int n,m,x,y;
	printf("Enter no. to be incremented and hexadecimal:\n");
	scanf("%d",&n);
	printf("Enter no. to be squared and binary:\n");
	scanf("%d",&m);
//	printf("Enter no. to convert to hexadecimal:\n");
//	scanf("%d",&x);
//	printf("Enter no. to convert into binary:\n");
//	scanf("%d",&y);
	D1.data=n;
	D1.processData=increment;
	D1.print=hexadecimal;
	D2.data=m;
        D2.processData=square;
	D2.print=binary;
	//printf("Increment is:\n");
	D1.processData(&D1.data);
	D1.print(&D1.data);
	//printf("Square is:\n");
	D2.processData(&D1.data);
	D2.print(&D2.data);
	return 0;
}
