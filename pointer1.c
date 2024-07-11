#include <stdio.h>





int main()
{
    
    int num1, num2;
    char ope;
    float value;
    printf("enter 2 no. and operend:",num1,ope, num2);
    scanf("%d %c %d",  &num1,&ope,&num2);
    switch(ope){
        case '+':
        value = num1+num2;
        printf("no.%f",value);
        break;
        case '-':
        value = num1-num2;
        printf("no.%f",value);
        break;
        case '*':
        value = num1*num2;
        printf("no.%f",value);
        break;
        case '/':
        if(num2 !=0){
            value = num1/num2;
            printf("no.%f",value);
           }
           else{
               printf("null");
       }
       break;
   }
   return 0;
}

