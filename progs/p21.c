#include<stdio.h>
#include<stdlib.h>

typedef struct{
  char name[20];
  char roll_no[10];
  unsigned int marks;
}student;

int comp(const void *x,const void *y){return *(int*)x<*(int*)y;}

void swap(unsigned char *s1, unsigned char *s2,unsigned int n){
  for(int i=0;i<n;i++){
    s1[i]^=s2[i];
    s2[i]^=s1[i];
    s1[i]^=s2[i];
  }
}

void qsortt(student *s,int hi,int lo){
  if(lo>=hi)return;
  int j=lo-1;
  for(int i=lo;i<hi;i++){
    if(comp(&s[i].marks,&s[hi].marks)){
        j++;
        swap((unsigned char*)(&s[j]),(unsigned char*)(&s[i]),sizeof(*s));
    }
  }
  j++;
  swap((unsigned char*)(&s[j]),(unsigned char*)(&s[hi]),sizeof(*s));
  qsortt(s,j-1,lo);
  qsortt(s,hi,j+1);
}

int main(void){
  student _s[8];
  for(int i=0;i<sizeof(_s)/sizeof(*_s);i++){
    scanf("%s",_s[i].name);
    scanf("%s",_s[i].roll_no);
    scanf("%u",&_s[i].marks);
  }
  qsortt(_s,7,0);
  for(int i=0;i<sizeof(_s)/sizeof(*_s);i++){
    printf("%s\n",_s[i].name);
    printf("%s\n",_s[i].roll_no);
    printf("%u\n",_s[i].marks);
  }
}
  

