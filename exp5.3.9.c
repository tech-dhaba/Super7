#include <stdio.h>

int main()
{
    int num;
    float sum = 0;
    int count=0;
    
    printf("enter no.",num);
    while(1){
        scanf("%d",&num);
        if(num == 999){
            break;
        }
        sum +=num;
        count++;
    }
    float mean = (count!=0)? sum/count :0 ;
    printf("\nMean:%f",mean);
    
    
    
    return 0;
}