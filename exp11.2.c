#include <stdio.h>


void sawp_num(int *p1, int *p2){
    int temp;
    temp =*p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    
    int num1, num2;
    printf("2 num:",num1, num2);
    scanf("%d %d",  &num1,&num2);
    sawp_num(&num1,&num2);
    printf("the swaped no. are:%d %d",num1,num2);
    
     return 0;
}

