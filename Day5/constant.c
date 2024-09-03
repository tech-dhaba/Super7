#include<stdio.h>
void example()
{
	int a=10;
	int b=20;
	//1.constant pointer to a value
	const int *ptr1=&a;//pointer to a constant integer
	printf("Value of a using ptr1:%d\n",*ptr1);
	// *ptr1=15;//Error:cannot modify the value pointed to by ptr1
	ptr1=&b;//OK: can change pointer to another address
	printf("Value of b using ptr1:%d\n",*ptr1);
	//2. constant pointer to address
	int *const ptr2=&a;//constant pointer to an integer
	printf("Value of a using ptr2:%d\n",*ptr2);
	*ptr2=30;//OK: can modify the value pointed to by ptr2
	printf("Value of a using ptr2:%d\n",*ptr2);
	//ptr2=&b;//Error : cannot change the address stored in ptr2
	//3.const pointer to const value 
	const int *const ptr3=&a;//constant pointer to a constant integer
	printf("Value of a using ptr3:%d\n",*ptr3);

	//*ptr3=40;//Erro: cannot modify the value pointed to by ptr3
	//ptr3=&b;//Error:cannot change the address stored in ptr3	
}
int main()
{
	example();
	return 0;
}
