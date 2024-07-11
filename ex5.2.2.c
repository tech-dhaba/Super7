
#include <stdio.h>

int main()
{
    int num;
    printf("no.\n");
    scanf("%d",&num);
    int value=num%2;
    
    switch(value){
    case 0:
    printf("no. is even");
    break;
    case 1:
    printf("no. is odd");
    break;
    }
    return 0;
}