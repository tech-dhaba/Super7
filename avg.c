#include<stdio.h>
void arr(int *ptr, int len){
    int sum=0;
    for (int i=0;i<len;i++)
    {
        sum=(sum+ *(ptr+i));
    }
    printf("%d\n",sum);
    int avg=sum/len;
    printf("Average Value is %d\n",avg);
    
}
int main(){
    int a[5]={0,1,2,3,4};
    int *ptr=a;
    ptr=a;
    int len=sizeof(a)/sizeof(int);
    arr(ptr,len);
    
return 0;
}
