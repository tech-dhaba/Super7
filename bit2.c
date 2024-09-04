#include<stdio.h>


int main(){
int count=0;
int a=18;
while(a){
if(a&1){
count=count+1;

}
a=a>>1;
}
printf("no of ones is %d\n",count);
return 0;
}
