#include<stdio.h>

void swap(int*,int*);

int main(){
  int a,b;
  scanf("%d",&a);
  printf("%d\n;",a);
  scanf("%d",&b);
  printf("%d\n;",b);
  swap(&a,&b);
  printf("%d\n;",a);
  printf("%d\n;",b);
   return 0;  


}
void swap(int*x,int*y){

int temp;
temp=*x;
*x=*y;
*y=temp;

}
