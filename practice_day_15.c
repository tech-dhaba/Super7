#if 0
//1 Write a function to swap two numbers using bitwise XOR. For example, swapping a = 5 and b = 7 should result in a = 7 and b = 5.
#include<stdio.h>
int swap(int * x,int * y)
{	
	*x = *x ^ *y;	
	*y = *x ^ *y;
	*x = *x ^ *y;
}
int main()
{
	int a;
	int b;
	printf("Enter value of a: \n");
	scanf("%d",&a);
	printf("Enter value of b: \n");
	scanf("%d",&b);
	swap(&a,&b);
	printf("After swapping : %d%d",a,b);
	return 0;

}









#elif 0
//2 Write a function that checks if a given integer is a power of two using bitwise operations. For example, 16 is a power of two, but 18 is not.
#include<stdio.h>
int pwr(int num)
{
	int count=0;
	int pos = 1;
	int len = sizeof(num)*8;
	for(int i =1 ; i<len ; i++)
	{
		if(num&pos)
		{
			count++;
		}
		pos = pos<<1;
	}
	if(count==1)
	{
		printf("The integer is power of 2");
	}
	else
	{
		printf("Not the power of 2");
	}
}
int main()
{
	int n;
	printf("Enter any integer : ");
	scanf("%d",&n);
	pwr(n);
	return 0;
}










#elif 0
//3
#include<stdio.h>
int set_bit(int num)
{
        int count=0;
        int pos = 1;
        int len = sizeof(num)*8;
        for(int i =1 ; i<len ; i++)
        {
                if(num&pos)
                {
                        count++;
                }
                pos = pos<<1;
        }
	printf("%d",count);
}
int main()
{
	int n;
	printf("Enter any integer : ");
	scanf("%d",&n);
	set_bit(n);
	return 0;
}









#elif 0
//4 Write a function to divide a number by a power of two using bitwise operations.
#include <stdio.h>

int divideByPowerOfTwo(int number,int power) {
    return number  >> power;
}

int main() {
    int number = 64;
    int power = 1;
    
    int result = divideByPowerOfTwo(number, power);
    
    printf("Result is: %d\n", result);
    
    return 0;
}








#elif 0
//5 Write a function to swap two integers using XOR operation without using a temporary variable
#include <stdio.h>
void swap(int *a, int *b) {
    if (a != b) { 
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int x = 5;
    int y = 10;
    
    printf("Before swap: x = %d, y = %d\n", x, y);
    
    swap(&x, &y);
    
    printf("After swap: x = %d, y = %d\n", x, y);
    
    return 0;
}





#elif 1



#else
#endif
