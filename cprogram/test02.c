#include<stdio.h>
typedef struct{
  int data;
  void (*processData)(int *);
}processData;

void increment(int *a){
    *a=(*a)+1;
    printf("%d\n",*a);
}
void squaring(int *a)
{
   *a=(*a)*(*a);
    printf("%d\n",*a);
   
}
void decrement(int *a){
    *a=(*a)-1;
    printf("%d\n",*a);
}
void main(){
  processData a;
  processData *ptr=&a;
  ptr->data=5;
  ptr->processData=&increment;
  ptr->processData(&(ptr->data));
  ptr->processData=&squaring;
  ptr->processData(&(ptr->data));
  ptr->processData=&decrement;
  ptr->processData(&(ptr->data));
    
}
