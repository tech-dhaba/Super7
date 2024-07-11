#include <stdio.h>

void Swap_no(int *p1, int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}



int main()
{
    
    int num1, num2;
    printf("enter 2 no.:",num1 , num2);
    scanf("%d %d", &num1,&num2);
    Swap_no(&num1,&num2);
    printf("swaping of x and y are: %d %d",num1 , num2);
    
   return 0;
}

