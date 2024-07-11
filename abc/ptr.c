/*
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

nclude <stdio.h>
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

*/







































