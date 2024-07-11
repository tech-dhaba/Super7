#include <stdio.h>

int main()
{
    int num;
    int value =1;
    int i=1;
    
    printf("enter no.",num);
    scanf("%d",&num);
    while (i<=num){
        value*=i;
        i++;
    }
    printf("%d=%d",num,value);
    
    
    
    return 0;
}