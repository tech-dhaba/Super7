#include<stdio.h>
#include <stdlib.h>

int main(){
  int a[]={1,3,4,5,6,6,7};
  int b[]={2,3,4,4,5,8,};
  int n1=7,n2=6;
  for(int i=0;i<n1;i++)for(int j=i+1;i<n1;j++)a[i]=(a[i]==a[j])?0:a[i];
  for(int i=0;i<n2;i++)for(int j=i+1;i<n2;j++)b[i]=(b[i]==b[j])?0:b[i];
  for(int i=0;i<n1;i++)for(int j=0;i<n2;j++)b[j]=(a[i]==b[j])?0:b[j];
  for(int i=0;i<n1;i++)printf("%d\t",a[i]);
  for(int i=0;i<n2;i++)printf("%d\t",b[i]);
}
  
