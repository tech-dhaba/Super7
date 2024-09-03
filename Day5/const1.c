#include<stdio.h>

int main()
{
	int a=5;
	int b=6;
	//1.
	const int *p1=&a;
	printf("value of a using p1=%d\n",*p1);
	//*p1=7;//Error:Storing at read only location
	p1=&b;
	printf("value of a using p1=%d\n",*p1);
	//2.
	int *const p2=&b;
	printf("value of b using p2=%d\n",*p2);
	*p2=30;
	printf("value of b using p1=%d\n",*p2);
	//p2=&a;
	//3.
	const int* const p3=&a;
	printf("value of a using p3=%d\n",*p3);
//	p3=&b;//Error
//	*p3=40;//Error
//	printf("value of a using p3=%d\n",*p3);
	return 0;
}
