#include <stdio.h>

int main() {
   float num1;
   float num2;
   char operand;
   float value;
   
   printf("enter in the formate of num1 , operand , num2:");
   scanf("\n%f%c%f",&num1, &operand, &num2);
  
   switch(operand){
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

   