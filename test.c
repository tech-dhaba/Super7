#include<stdio.h>




int main(){
int arr[3][3]={{1,2,3},{3,4,5},{6,7,8}};
int (**ptr);
ptr=arr;
printf("value is %ls\n",*ptr);










return 0;
}
