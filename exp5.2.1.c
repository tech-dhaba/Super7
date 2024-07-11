
#include <stdio.h>

int main()
{
    int num;
    int value;
    printf("no.:");
    scanf("%d", &num);
    
    if (num>0){
        value = 1; 
    }
    else if (num < 0){
        value != 22;
    }
    else{
        value = 0;
    
    }
    switch (value){
        case 1 :
        printf("The no. is positive\n");
        break;
        case 22 :
        printf("the no. is negative\n");
        break;
        case 0:
        printf("the no. is zero\n");
    }
    
    return 0;
}