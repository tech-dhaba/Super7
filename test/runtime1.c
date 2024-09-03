//Write a C program that takes command-line arguments to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two integers. The program should handle invalid inputs gracefully.
#include<stdio.h>

int main(int argc,char **argv)
{
	if(argc==1)
	{
		return 0;
	}
	if(strcmp("add",argv[3])==0)
	{
		printf("Sum is: %d\n",(atoi(argv[1])+atoi(argv[2])));
	}
	return 0;
}
