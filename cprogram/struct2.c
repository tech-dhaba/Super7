#include<stdio.h>

void example(){
 int a=10;
 int b=20;
 //  const pointer to value
 const int *ptr1=&a;// pointer to a constant integer
 printf("value of ptr :%d\n",*ptr1);
 *ptr1 =15; //error: cannot modify the value pointed to by ptr1
 ptr1= &b;// ok: can change the pointer to point to another address
 printf("value of b ptr :%d\n",*ptr1);
// 2. const pointer to address
 int *const ptr2=&a;//contsant pointer to an integer  
 printf("value of ptr2 :%d\n",*ptr2);
 
 *ptr2=30;// ok : can modify the value pointer to by ptr2
 printf("value of using a ptr2: %d\n",*ptr2);
 ptr2=&b;//canno chnage the address stored in ptr2
// const pointer to const value  
const int *const ptr3=&a;// constant pointer to a constant integer
printf("value of a using ptr3: %d\n",*ptr3);
 *ptr3 =40;//error cannot modify the value pointed to a constant integer  
 ptr3 =&b;// error : cannot change the address stored in ptr3
}
int main(){
	example();
	return 0;
}
