//Void Pointers:

//Create a generic function that takes a void pointer and a data type as arguments and prints the value of the data.
#include<stdio.h>
void print(void *ptr,char datatype)
{
	switch(datatype)
	{
		case 'I':
			printf("INTEGER:%d\n",*(int *)ptr);
			break;
		case 'F':
			printf("FLOAT:%f\n",*(float *)ptr);
			break;
		case 'C':
			printf("CHARACTER:%c\n",*(char *)ptr);
			break;
		default:
			printf("UNKNOWN DATATYPE\n");
			break;
	}
}
int main()
{
	int i=7;
	float f=2.5;
	char c='a';
	print(&i,'I');
	print(&f,'F');
	print(&c,'C');
}
