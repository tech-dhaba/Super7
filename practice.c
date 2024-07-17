#include <stdio.h>
#define SIZE 10
int main(){
int i;
int number[i];
printf("Enter %d integer",SIZE);
for(i=0 ; i<SIZE ; i++)
{
printf("Enter integer : ",i +1);
scanf("%d",&number[i]);

}
for(i=SIZE ; i>=0 ; i--){
printf("In reverse :",number[i]);
}
return 0;
}
