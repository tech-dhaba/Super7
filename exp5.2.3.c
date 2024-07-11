
#include <stdio.h>

int main()
{
    int num ;
    printf("no:");
    scanf("%d",&num);
    int value;
    if(num>=5 && num <10){
        value = 1;
    }
    switch(value){
        case 1:
        printf("\n The no. is between  5 to 10");
        break;
        default:
        printf("\n No. doesn't lie in between 5 to 10");
        
    }
    return 0;
}