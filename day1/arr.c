#include <stdio.h>

void swap(int *ptr1, int *ptr2){
    int c;
    c=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;
}
void main(){
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d", &a , &b);
    swap(&a , &b);
    printf("%d %d",a ,b );
}
