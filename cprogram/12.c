#include<stdio.h>
void print(void *ptr,int size)
{
	if(size== sizeof(int))
	{
		int value = *(int*)ptr;
		printf("value = %d\n",value);
	}
	else if(size== sizeof(double))
	{
		double value= *(double*)ptr;
		printf("value = %lf\n",value);
	}
	else if(size== sizeof(float))
	{
		float value = *(float*)ptr;
		printf("value = %f\n",value);
	}
	else if(size == sizeof(char))
	{
		char value =*(char*)ptr;
		printf("value = %c\n",value);
	}
	else if (size == sizeof(char*))
	{
		char* value = *(char**)ptr;
		printf("value = %s\n",value);
	}
	else
	{	
		printf("invalid datatype");
	}
}
int main()
{
	int a = 4;
	double b = 278.78;
	float c = 34.23;
	char d ='x';
	char* e = "hello world";
//	printf("%d",sizeof(e));
	print(&a,sizeof(int));
	print(&b,sizeof(double));
	print(&c,sizeof(float));
	print(&d,sizeof(char));
	print(&e,sizeof(char*));
}
	
