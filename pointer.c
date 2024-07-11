#include<stdio.h>
int main(){
    
    int a, b;
    int *p = NULL;
    p = &a;
    *p = 5;
    p = &b;
    printf("Eneter any integer:");
    scanf("%d%*c",p);
    printf("a=%d,\tb =%d\n",a,b);
    return 0;
    
}