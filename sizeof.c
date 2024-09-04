#include<stdio.h>
typedef int fr
void size_of(void *ptr){
int *ptr1=ptr+1;
printf("size of %d\n",ptr);
printf("size of %d\n",ptr1);
printf("diff is %d\n",ptr1-ptr);
printf("diff is %d\n",(char*)ptr1-(char*)ptr);

}

int main(){
int *ptr=&a;
int *ptr1=ptr+1;
printf("size of %d\n",ptr);
printf("size of %d\n",ptr1);
printf("diff is %d\n",ptr1-ptr);
printf("diff is %d\n",(char*)ptr1-(char*)ptr);
return 0;

}
