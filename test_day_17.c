#if 0
// Que 1.What is a pointer in C, and how do you declare and initialize one?
// Ans :* Pointer stores the address of the variable.
//      * Its syntax is *(pointer name)
//      * It points to the value of the address it is pointing to.
//      * Example: 
#include<stdio.h>
int main()
{
	int *x = 10;
	int ptr = &x;


	printf("Address : %d",ptr);
	printf("\nValue of x : %d",x);
	return 0;
}





#elif 0
//Que 2.Explain pointer arithmetic. How does adding or subtracting an integer value to/from a pointer affect it?
//Ans : * Pointer Arithmetic can be performed using pointer as by adding and subtracting using the address of the variable in which value has             been stored.
//      * Example:
#include<stdio.h>
int main()
{
	int x = 5 ;
	int y = 5 ;
	int *num1 = &x;
	int *num2 = &y;
	int add = (*num1 + *num2);
	int sub = (*num1 - *num2);
	printf("Addition : %d\n",add);
	printf("Subtraction : %d",sub);
	return 0;
}





#elif 0
//Que 3.What is a pointer to a pointer? How do you declare and use a pointer to a pointer?
//Ans : * Pointer to pointer is nothing but a pointer which is pointing to the address of a pointer which is further pointing to the address of           another variable.
//	* Example:
#include<stdio.h>
int main()
{
	int x = 5;
	int *ptr = &x;
	int *ptr1 = &ptr;
	printf("Adress : %d",ptr1);
	return 0;
}






#elif 0
//Que 4.How do you allocate and deallocate memory dynamically in C using pointers?
//Ans : * Memory is allocated and deallocated or we can say it is freed using malloc and calloc.





#elif 0
//Que 5.Explain the relationship between pointers and arrays in C. How can you access array elements using pointers?
//Ans : * We can use pointer to access multiple array element.
//	* Example:
#include<stdio.h>
int main()
{	
	int arr[5]={1,2,3,4,5};
	int *ptr = arr;
	printf("Array :\n");
	for(int i=0 ; i<5 ; i++)
	{
	printf("%d\n",*(ptr + i));
	}
	return 0;
}



#elif 1
//Que 6.What is a function pointer? Provide an example of how to declare, initialize, and use a function pointer.
#include<stdio.h>
typedef int (*fp)(int a,int b);
int add(int a,int b)
{
    return (a+b);
}
int sub(int a,int b)
{
    return (a-b);
}
int find(int x,int y, fp nikal)
{
    return nikal(x,y);
}
int main()
{
    printf("Add is: %d\n",find(3,4,add));
    printf("Sub is: %d\n",find(3,4,sub));
    printf("This is an output of performing addition and subtraction using function pointer as an argument to another function.");
  
}

#else
#endif
 
