#include<stdio.h>
int largest(int a[],int x,int y)
{  int lar=0;
   for(int i=x;i<=y;i++){
     if(a[i]>lar) lar = a[i];
}
return lar;
}
int smallest(int a[],int x,int y)
{  int sam=a[x];
   for(int i=x;i<=y;i++){
     if(a[i]<sam) sam = a[i];
}
return sam;
}
int  main(){
printf("Enter the size of the array\n");
int n ,x,y;
scanf("%d",&n);
printf("Enter the range of the array\n");
scanf("%d",&x);
scanf("%d",&y);
int arr[n];
if(x<=0|| y>n|| x>y||x>n||y>n){ printf("Invalid "); return 0;}
printf("enter the elements of array \n ");
for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Largest no in the range = %d\n",largest(arr,x,y));
printf("Smallest no in the range = %d\n",smallest(arr,x,y));
return 0;
}
