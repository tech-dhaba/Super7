#include<stdio.h>
typedef struct{
int index;	
int arr[index];
}bitset;
//
void bit_init(struct bitset *ptr,int set_index){
ptr->index=set_index;
for(int i=0;i<=count;i++){
ptr->arr[i]=NULL;
}
printf("array index get set:");
}
//
int bit_set(struct bitset *ptr,int data,int count){
int i=0;
while(i){
ptr->arr[count]=data;
printf("added data is %d\n",ptr->arr[count]);
i=i+1;
}
printf("%dth data added\n",count);
return count+1;
}
//
void bit_check(struct bitset *ptr,int count){
for(int i=0;i<=count;i++){
printf("%dth value is %d\n",i,ptr->arr[i]);
}
}
//
void bit_clear(struct bitset *ptr,int n){
for(int i=0;i<=count;i++){
if(i==n){
ptr->arr[i]=NULL;
printf("deleted...");
}
}
}
//
int main(){
bitset bit;
bit_init(&bit,5);





return 0;
}


