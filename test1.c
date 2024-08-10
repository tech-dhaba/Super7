/*
//Implement a C program to find the largest of three numbers using nested if-else statement

#include<stdio.h>

//creating a function to check a largest of three
//delcaring amd defining a function
int largest(int num1, int num2, int num3)
{
	//using conditional statement for checking the largest number
	if(num1>num2 || num1>num3)
	{
		printf("The %d is largest among all three",num1);
	}
	else(num2>num1 || num2>num3)
        {
                printf("The %d is largest among all three",num2);
        }
	else(num3>num1 || num3>num2)
        {
                printf("The %d is largest among all three",num3);
        }
}
//calling the function
int main() 
{
	int a,b,c;
	printf("Enter value of a: ");       //
	scanf("%d",&a);
	printf("Enter value of b: ");       //taking inputs
        scanf("%d",&b);
	printf("Enter value of c: ");       //
        scanf("%d",&c);
	largest(a,b,c);
	printf("%d",largest(a,b,c));
	return 0;
}




// Develop a C program to demonstrate bitwise operations by checking if a number is even or odd using bitwise AND.

#include<stdio.h>
//declaring and defining the function to find the odd and even number by & operator
int func(int num)
{
	//using comditional statement
	if((num&1)==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}

}
//calling the function
int main() 
{
	int n;                                          //taking the input
	printf("Enter the value of n : ");
	scanf("%d",&n);
	func(n);                                        //using the function
	//printf("%d",func(n));
	return 0;
}



// Create a program that uses an array to store student grades and calculates the average grade.
#include<stdio.h>
//writing main function
int main()
{
	
	int a[]={95,85,75,98,75,55,75}; //initiallizing array with values
	int *ptr =a; //creating the pointer and pointing it to a
	int len = sizeof(a)/sizeof(int); //calculating size
	printf("The marks of students are :\n");
	for(int i=0 ; i<len ; i++)
	{
		printf("%d\n",*(ptr + i)); //printing the value of array
	}
	printf("Average of the marks are : \n");
	int count = 0;
	for(int i=0 ; i<len ; i++)
	{
		count=count+a[i]; //calculating average of array
	}
	printf("%d",(count/7));
	return 0;
}

*/


//Write a function that takes an integer array and its size as arguments and returns the largest element in the array. Write a program to test this function

#include<stdio.h>
//declaring and defining the function
int max(int *ptr,int len)
{
        int i,max=0;
        for(i=0 ; i<len ; i++)
        {
                if(*(ptr+i)>max)
                {
                        max=*(ptr+i);
                }
        }
        return max;
}
//calling the function

int main(){
int a[]={1,2,3,4,5};
int *ptr =a;
printf("Maximum in an array : \n");
int maximum = max(a,len);
printf("%d\n",maximum);
return 0;
}
