#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

typedef struct {
  uint32_t size;
  uint32_t index;
  int *arr;
}vector;

void init(vector *v){
  v->size=1;
  v->index=0;
  v->arr=malloc(4);
}

void insert(vector *v,int data){
  if(v->index>=v->size){
    v->arr=(int*)realloc(v->arr,(v->size*2)*sizeof(int));
    v->size*=2;
  }
  v->arr[v->index++]=data;
}

void print(vector *v){
  for(int i=0;i<v->index;i++)printf("%d ",v->arr[i]);
  printf("\n");
}

int main(void){
  vector v;
  init(&v);
  insert(&v,1);
  insert(&v,2);
  insert(&v,3);
  print(&v);
  insert(&v,4);
  insert(&v,5);
  insert(&v,6);
  print(&v);
}
