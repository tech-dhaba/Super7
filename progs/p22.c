#include<stdio.h>

typedef struct{
  char a[10];
  char b[20];
  unsigned int c;
}str;


void swap(unsigned char* c1,unsigned char* c2,unsigned int n){
  if(c1==c2)return;
  for(int i=0;i<n;i++){
    c1[i]^=c2[i];
    c2[i]^=c1[i];
    c1[i]^=c2[i];
  }
}

//void swap(int *a,int *b){
  //*a^=*b;
  //*b^=*a;
  //*a^=*b;
//}

void qsortt(str *arr,int lo,int hi){
  if(lo>=hi)return;
  int j=lo-1;
  for(int i=lo;i<hi;i++){
    if(arr[i].c<arr[hi].c){
      j++;
      swap((unsigned char*)&arr[j],(unsigned char*)&arr[i],sizeof(*arr));
      //swap(&arr[i],&arr[j]);
    }
  }
  j++;    
  swap((unsigned char*)&arr[j],(unsigned char*)&arr[hi],sizeof(*arr));
  //swap(&arr[j],&arr[hi]);
  qsortt(arr,lo,j-1);
  qsortt(arr,j+1,hi);
}

int main(void){
  //int arr[]={2,4,1,3,1,5,2};
  //for(int i=0;i<7;i++)printf("%d ",arr[i]);
  //printf("\n");
  //for(int i=0;i<7;i++)printf("%d ",arr[i]);
  str s[3]={{"aa","aa",10},{"bb","bb",5},{"cc","cc",13}};
  printf("%s ",s[0].a);
  printf("%s ",s[0].b);
  printf("%u ",s[0].c);
  printf("\n%s ",s[1].a);
  printf("%s ",s[1].b);
  printf("%u ",s[1].c);
  printf("\n%s ",s[2].a);
  printf("%s ",s[2].b);
  printf("%u ",s[2].c);
  qsortt(s,0,2);
  //swap((unsigned char*)&s[0],(unsigned char*)&s[1],sizeof(*s));
  printf("\n%s ",s[0].a);
  printf("%s ",s[0].b);
  printf("%u ",s[0].c);
  printf("\n%s ",s[1].a);
  printf("%s ",s[1].b);
  printf("%u ",s[1].c);
  printf("\n%s ",s[2].a);
  printf("%s ",s[2].b);
  printf("%u ",s[2].c);
}
