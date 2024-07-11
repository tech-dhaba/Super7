/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
  
  
int main(){
    
    int num;
    
    while(1){
        printf("\nenter a no.:");
        scanf("%d",&num);
        if(num>0 && num<10){
        printf("\ncorrect");
        break;
    }
    else{
        printf("\ninvalid enter a new no.");
        continue;
    }
    }

    return 0;
}