#if 0
//Program 1: create , initialize and usd pointer
#include <stdio.h>
int main() {
	int num = 10;
	int *ptr;
	ptr = &num;


printf("Print address of num = %p\n",ptr);
printf("Print value of num = %d\n",num);
printf("Print address of ptr = %p\n",&ptr);
printf("Print value of ptr = %p\n",ptr);
return 0;
}
#elif 0
#include <stdio.h>
int main() {
int *x,*y;
int num1,num2,temp;
x=&num1;
y=&num2;
printf("Enter two number : ");
scanf("%d%d",num1,num2);
temp=*x;
*x=*y;
*y=temp;
printf("After swapping : %d%d", *x,*y);
return 0;
}

#elif 0
//Program 2: add two integer using pointer
#include <stdio.h>
int main() {
int num1,num2,sum;
int *x,*y;
x=&num1;
y=&num2;
printf("Enter value of x : \n");
scanf("%d",x);
printf("Enter value of y : \n");
scanf("%d",y);
sum = *x +*y;
printf("Addition of two number are = %d\n",sum);
return 0;
}

#elif 0
//Program 3: Swap two number
#include <stdio.h>
int main() {
int *x,*y;
int num1,num2,temp;
x=&num1;
y=&num2;
printf("Enter two number : ");
scanf("%d%d",x,y);
temp=*x;
*x=*y;
*y=temp;
printf("After swapping : %d%d", *x,*y);
return 0;
}

#elif 0
//Program 4: 
#include<stdio.h>
int add(int x,int y)
{ 
return x + y;
}
int sub(int x, int y)
{
return x - y;
}
int mul(int x, int y)
{
return x * y;
}
int div(int x, int y)
{
return x / y;
}
int main(){
int (*ptr)(int x,int y);
ptr = add;
int result_add = add(5,3);
printf("Result for add = %d\n",result_add);
int (*ptr1)(int x,int y);
ptr1 = sub;
int result_sub =sub(5,3);
printf("Result for sub = %d\n",result_sub);
int (*ptr2)(int x,int y);
ptr2 = mul;
int result_mul = mul(5,3);
printf("Result for mul = %d\n",result_mul);
int (*ptr3)(int x,int y);
ptr3 = div;
int result_div = div(5,3);
printf("Result for div = %d\n",result_div);
return 0;

}


#elif 0
#include<stdio.h>
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void main() { 
	int x,y;
	printf("Enter two integer : \n");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("After swap: %d %d ",x,y);
	return 0;

}


#elif 0
#include <stdio.h>
#define SIZE 10

 int function(int, int[]);

 int main(void)
 {
 int i, n, res;
 int b[SIZE];

 n = 5;
 for (i = 0; i < SIZE; ++i)
 b[i] = i;

 printf("Before the function call: n = %d\n", n);
 printf("and the array b contains: ");
 for (i = 0; i < SIZE; ++i)
 printf("%4d", b[i]);

 res = function(n, b);

 printf("\n\nAfter the function call: n = %d,\n", n);
 printf("the array b contains: ");
 for (i = 0; i < SIZE; ++i)
 printf("%4d", b[i]);

 printf("\nand res = %d\n", res);

 return 0;
 }

 int function(int x, int y[])
 {
 int i;

 x = x * x;

 for (i = 0; i < SIZE; ++i)
 y[i] = i * i;

 return x;
 }


#elif 0
//Void Pointers: Create a function that takes a void pointer and the size of the data it points to. The function should print the value based on the data type.
#include<stdio.h>
typedef enum{
	INT,
	FLOAT,
	CHAR,
}datatype;

void printvalue(void * data , size_t size , datatype type){
switch(type){
	case INT:
		if(size == sizeof(INT))
		{
		printf("Integer %d\n",*(int*)data);
		}
		else 
		{
		printf("Size doesnt mis match");
		}
		break;
	case FLOAT:
		if(size == sizeof(FLOAT))
		{
		printf("Float %f\n",*(float*)data);
		}
		else
		{
		printf("Size doesnt mis match");
		}
		break;
	case CHAR:
		 if(size == sizeof(CHAR))
                {
                printf("Char %c\n",*(char*)data);
                }
                else
                {
                printf("Size doesnt mis match");
                }	
		break;
	default:
		break;
}
}
int main() {
int i = 42;
float f =1.007;
char c = 'b';

printvalue(&i,sizeof(i),INT);
printvalue(&c,sizeof(c),CHAR);
printvalue(&f,sizeof(f),FLOAT);

return 0;
}


#elif 0

//Array Pointers: Implement a function that takes a pointer to an array of integers and its size, and then calculates the sum of its elements.
#include<stdio.h>
int sum_(int *ptr, int size){
int sum =0;
	for (int cnt =0;cnt<size;cnt++){
	sum = sum + *(ptr+cnt);
}
printf("sum through ptr %d",sum);
}
int main(){
int i;
int sum=0;
int a[10]={1,7,5,3,2,3,7,51,5,5};
for(i=0 ; i< 10; i++){
printf("%d\n",a[i]);
sum = sum + a[i];
}
sum_(a,10);
printf("normal sum %d",sum);
return 0;
}

  


#elif 0
#include <stdio.h>
void swap(int *a,int *b ){
int tmp=*b;
*b=*a;
*a=tmp;

}
int main() {
int a[5]={1,2,3,4,5};
int len=sizeof(a)/sizeof(int);
int *ptr = a;
ptr = a;
printf("Value is :\n");
for(int i=0;i<len;i++)
{
printf("%d\n",*(ptr + i));
}
printf("Reverse : \n");
for(int i=0 ; i<len/2 ; i++)
{
swap(&a[i],&a[len-i-1]);
}

for(int i=0;i<len;i++)
{
printf("%d\n",*(ptr + i));
}
printf("Index value : \n");
int num =3;
for(int i=0; i<len ; i++){
	if(a[i]==num)
	{
	printf("found %d\n",i);
	break;
	}
	
}
return 0;
}





#elif 0
//Iterating through Arrays with Pointers: Write a code snippet that iterates through all elements of an array using a pointer.
//Program :
#include<stdio.h>
int main() {
int a[5] = {1,2,3,4,5};
int len = sizeof (a)/sizeof (int);
int *ptr = a;
printf("Elements in array : \n");
for(int i=0 ; i<len ; i++){
	printf("%d\n",*(ptr + i));
}
return 0;
}



#elif 0
//Reversing Array with Pointers: Write code that reverses the order of elements in an array using two pointers.
#include<stdio.h>
int main() {
int a[5] = {1,2,3,4,5};
int len = sizeof (a)/sizeof (int);
int *ptr = a;
printf("Elements in reverse : \n");
for(int i=0 ; i<len/2 ; i++){
        printf("%d\n",*(ptr + i));
}
return 0;
}




#elif 0
//Finding Minimum/Maximum: How can you find the minimum or maximum element within an array efficiently using pointers?
#include<stdio.h>
int main() {
int a[5]={1,2,3,4,5};
int *ptr=a;
ptr =a;
int i;
int len = sizeof(a)/sizeof (int);
printf("Element :\n");
for(int i = 0 ;i<len ; i++ )
	{
		printf("%d\n",*(ptr + i));
	}
int num = 5;
printf("Searching max :\n");
for(int i = 0; i<len ; i++)
	{if(*(ptr + i) == num)
		{
		printf("%d\n",*(ptr + i));		  
		}
	}
int max=0;
printf("Maximum = ");
for(i=0 ; i<len ; i++)	
	{
	if(a[i]>max)
		{
			max=a[i];
		//	printf("%d",max);
		}
	// printf("%d",max);
	}
 printf("%d",max);
return 0;
}




#elif 0
//1 Array Traversal with Pointers: Write a C program to traverse an array using a pointer and modify each element by adding a constant value.

#include <stdio.h>
int main() {
int a[]={1,2,3,4,5};
int *ptr = a;
int len = sizeof (a)/sizeof (int);
printf("Elements in array : \n");
for(int i = 0 ; i < len ; i++ )
	{
		printf("%d\n",*(ptr + i));
	}
int num;
printf("Enter a value to be added : \n");
scanf("%d",&num);
for( int i = 0 ; i< len ; i++)
	{ 
	a[i]=a[i] + num;
	printf("%d\n",*(ptr + i));
	}
return 0;
}



#elif 0
//2 Finding Minimum/Maximum: Write a C program to find the minimum and maximum elements in an array using pointers.


#include <stdio.h>
int max(int *ptr,int len)
{

	for(i=0 ; i<len ; i++)
	{
		if(*(ptr+i)>max)
		{
			max=*(ptr+i);
		}
	}
	return max;
}

int min(int *ptr,int len)
{
        int i,min=2;
        for(i=0 ; i<len ; i++)
        {
                if(*(ptr+i)<min)
                {
                        min=*(ptr+i);
                }
        }
        return min;
}


int main(){
int a[]={1,2,3,4,5};
int *ptr =a;
int len = sizeof (a) / sizeof (int);
printWrite a function to perform bitwise AND of all numbers in a given range [m, n].f("Element in an array : \n");
for(int i=0 ; i<len ; i++)
	{
		printf("%d\n",*(ptr +i));
       	}
printf("Maximum in an array : \n");
int maximum = max(a,len);
printf("%d\n",maximum);
printf("Minimum in an array : \n");
int minimum = min(a,len);
printf("%d\n",minimum);

return 0;
}



#elif 0




#include<stdio.h>
int main() 
{
	int a[]={1,2,3,4,5,6,7,8,9,10};Write a function to perform bitwise AND of all numbers in a given range [m, n].
	int *ptr =a;
	int len = sizeof(a) / sizeof (int);
	printf("Element in an array : \n");
	for(int i=0 ; i<len ; i++)
	{
		printf("%d\n",*(ptr + i));
	}
	int search;
	printf("Enter a number from array to be searched : \n");
	scanf("%d",&search);
	for(int i =0 ; i<len ; i++)
	{
		if(*(ptr +i)==search)
git@github.com:tech-dhaba/Super7.git		{
			printf("a[i] : %d\n",i);
		}
	}
	return 0;
}



#elif 0
//4 Array Reversal: Write a C program to reverse the order of elements in an array using pointers (without a temporary array).


#include<stdio.h>
int swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int a[] = {1,2,3,4,5};
	int len = sizeof (a)/sizeof(int);
	for(int i=0;i<len/2;i++)
	{
		swap(&a[i],&a[len-i-1]);
	}
	for(int i=0;i<len;i++){
	printf("arr %d\n",a[i]);
	}
return 0;

}




#elif 0
//Write a C program to declare a 2D array (matrix) with dimensions m (rows) and n (columns), where m and n are provided by the user.


#include<stdio.h>
#define Max_row 100
#define Max_column 100
int main() {
int m,n;
int matrix[Max_row][Max_column];
printf("Enter the number of rows :\n ");
scanf("%d",&m);
printf("Enter the number of column :\n ");
scanf("%d",&n);

if(m > Max_row || n > Max_column)
{
	printf("Entered value is greater than expected\n");
}
for(int i=0 ; i<m ; i++)
{
	for(int j=0 ; j<n ; j++)
	{
		printf("Element [%d][%d] : \n",i,j);
		scanf("%d",&matrix[i][j]);
	}
}
for(int i=0 ; i<m ; i++)
{
        for(int j=0 ; j<n ; j++)
        {
                printf("%d ",matrix[i][j]);
                
        }
	printf("\n");
}
for(int i=0 ; i<m ; i++)
{
        for(int j=0 ; j<n ; j++)
        {
		printf("Enter i and j : ");
		scanf("%d%d",&i,&j);
		printf("%d\n ",matrix[i][j]);
        }
}
return 0;
}



//                                                    DAY 5


#elif 0
// 1 Write a function that checks if a number is even using the bitwise AND operator (&).


#include<stdio.h>
int main()
{       int n;
	printf("Enter a value : ");
	scanf("%d",&n);
	if((n & 1) == 0)
	{
		printf("%d Number is even ",n);
	}
	else
	{
		printf("%d Number is odd",n);
	}
	return 0;
}



#elif 0
// 2 Write a function that checks if a number is odd using the bitwise XOR operator (^).

#include<stdio.h>
int main()
{       int n;
        printf("Enter a value : ");
        scanf("%d",&n);
        if((n ^ 1) & 1)
        {
                printf("%d Number is even ",n);
        }
        else
        {
                printf("%d Number is odd",n);
        }
        return 0;
}




#elif 0
// 3 Write a function that sets the least significant bit (LSB) of a number to 1 using the bitwise OR operator (|).


#include<stdio.h>
int main() {
int n;
printf("Enter a number : \n");
scanf("%d",&n);
int c = n|1;
printf("Number with LSB set to 1: %d \n",c);
return 0;
}



#elif 0
// 4 Write a function that clears the most significant bit (MSB) of a number using a bitwise AND with a specific mask.
elseif 0
// 5 Write a function that swaps the values of two variables using only bitwise XOR.



#include<stdio.h>
void swap(int*a ,int*b)
{
	if(a!=b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	}
}

int main() 
{
	int num1;
	int num2;
	printf("Enter two number : ");
	scanf("%d%d",&num1,&num2);
	swap(&num1,&num2);
	printf("After swapping :%d %d",num1,num2);
	return 0;
}





#elif 1
// 6 Write a function that counts the number of set bits (1s) in a given integer.


#include<stdio.h>
int main(void){
	int x=100;
	int i=1;
	int bin[10]={0};
	while(x){
		if(x&1){
			bin[10-i]=1;
		}x>>=1;
		i++;
	}
	for(int j=0;j<10;j++)
	printf("%d",bin[j]);
	return 0;
}




#elif 0
// 7 Write a function that checks if a number is a power of 2 using bitwise operations.


#include<stdio.h>
int pwr(int num1)
{
	int len=sizeof(num1)*8;
	int pos = 1;
	int cnt=0;
	for(int i=1;i<len;i++)
	{

		if (num1&pos)
		{
			cnt++;
		}
		pos = pos << 1;

	}
	printf("cnt value if %d \n", cnt);	
}
int main() 
{
	int n;
	printf("Enter any number : \n");
	scanf("%d",&n);
	pwr(n);
	return 0;
}


#elif 0
// Counting the Number of Set Bits (1s) in an Integer 


#include<stdio.h>
int countsetbit(int num){
    int count =0;
    while(num){
        count=count+(num&1);
        num = num>>1;
    }
    return count;
    }
int main(){
    int n;
    printf("Enter any integer : ");
    scanf("%d",&n);
    countsetbit(n);
    printf("Set bit in this integer is : %d",countsetbit(n));
    return 0;
}



#elif 0
// check if the number is power of two


#include<stdio.h>
int pwr(int num)
{
	int count =0;
	int len = sizeof(num)*8;
	if(num == 1)
	{
		printf("No it is not the power of 2");
	}
	else{
	for(int i =0 ; i<len ; i++ )
	{
		count = count + (num & 1);
		num = num>>1;
	}
	if(count==1)
	{
		printf("Yes it is power of 2");
	}
	else
	{
		printf("No it is not the power of 2");
	}
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
// Clearing the Rightmost Set Bit

#include<stdio.h>
int crmb(int num)
{
	int c=num&(num-1);
	return c ;
}
int main()
{
	int n;
	printf("Enter any integer : ");
	scanf("%d",&n);
	crmb(n);
	printf("After clearing right most bit : %d",crmb(n));
	return 0;
}



#elif 0
//Write a function that checks if two numbers have opposite signs using bitwise XOR.


#include<stdio.h>
int check(int num1, int num2)
{
	if((num1^num2)<0)
	{
		printf("The number has opposite sign");
	}
	else
	{
		printf("The number has same sign");
	}
}
int main()
{
	int n,m;
	printf("Enter any value : \n");
	scanf("%d%d",&n,&m);
	check(n,m);
	//printf("%d",check(n,m));
	return 0;
}




#elif 0
//Write a function that determines the parity (even or odd number of set bits) of a number using bitwise XOR.


#include<stdio.h>
int paritycheck(int num)
{
	int len = sizeof(num)*8;
	int count=0;
	//for(int i=0 ; i<len ; i++)
	while(num){
	//	int count =0;
		count = count + (num&1);
		num=num>>1;
	}
	return count;
	
}
int main()
{
	int n;
	printf("Enter any integer : ");
	scanf("%d",&n);
	paritycheck(n);
	printf("%d",paritycheck(n));
	return 0;
}




#elif 0
//find the length of string


#include<stdio.h>

int main()
 {
    char *charptr = "Helloworld";
    char Name[]={'H','e','l','l','o','w','o','r','l','d'} ;
    int len = sizeof(Name)/sizeof(char);
    int count=0;
    for(int i=0 ; i<*charptr ; i++){
        printf("%c",*charptr++);
        if(*charptr == '\0'){
            printf("%c",*charptr);
            count = i+1;
            break;
        }

    }
    printf("%d\n",count);
    printf("%d\n",len);
    return 0;
}



#elif 0
// reverse a string
#include<stdio.h>
#include<string.h>
char new_string[50];
void reverse(char *string ,char *reversed_string )
{
	int len = strlen(string);
	for(int i=0; i<len ; i++)
	{
		reversed_string[i]=string[len - 1 - i];

	}
}
void main()
{
	char *n = "Hello";
	reverse(n,new_string);
	printf("%s",new_string);
	return 0;
}

#elif 0
//reverse a word
#include<stdio.h>
#include<string.h>
char arr[50];
void swap(char *string )
{
	int space_index=0;
        int len = strlen(string);
        for(int i=0; i<len ; i++)
        {
		if( *string==' ')
		{
			printf("%d\n",i);
			space_index = i;
			break;
		}
		else
		{

		}
		
			string++;
	}
	int j=0;
	for(int i=space_index ; i<=len ; i++)
	{
		arr[j++]=*string++;
		printf("%s",arr);
	}
	arr[j++]= ' ';
	for(int i=0 ; i<=space_index ; i++)
	{
		arr[j++] = string[i];
		printf("%s",arr);
	}
	printf("new string %s\n",arr);
			
}
void main(char)
{
        char *n = "Hello World";
        swap(n);
       // printf("%s",n);
        return 0;
}

#elif 0
#include<stdio.h>
#include<string.h>
struct student{
    int roll;        
    float cgpa;      
    char name[100];  
    void *ptr;
   
};
int swap(void *a,void *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a -*b;
}
int main() {
    struct student s1;
    s1.roll = 042;  
    s1.cgpa = 8.2; 
    //s1.name = "Khushdeep";
    strcpy(s1.name,"Khushdeep");
    s1.ptr=&s1;

    struct student s2;
    s2.roll = 024;
    s1.cgpa = 9.0;
    //s1.name = "Deep";
    strcpy(s2.name,"Deep");
    s2.ptr=&s2;
/*
    printf("Name = %s\n",s1.name);
    printf("Roll no. =  %d\n",s1.roll);
    printf("cgpa = %f\n",s1.cgpa);
    printf("Address = %d",&s1.ptr);
    */
    swap((void*)&s1,(void*)&s2);
    //printf("%d",swap(&s1,&s2));
    return 0;
}

#else
#endif












