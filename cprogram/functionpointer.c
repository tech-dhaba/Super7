#include<stdio.h>
#include<math.h>
#define max 4
void modify(int *a,void (*fp[])(int*),int ind){  fp[ind](a);}
void doubleit(int *a){
    for(int i=0;i<max;i++){
	a[i]=a[i]*2;
}
}
void squareit(int *a){
 	for(int i=0;i<max;i++){
	a[i]=sqrt(a[i]);
}
}
void multiply(int *a){
	printf("No to be multipied\n");
        int n;
        scanf("%d",&n);
        for(int i=0;i<max;i++){
	a[i]=a[i]*n;
}
}
int main(){
	int a1[max]={1,4,9,16};
	int a2[max]={1,4,9,16};
	int a3[max]={1,4,9,16};
 	void (*fp[3])(int*)={doubleit,squareit,multiply};
        modify(a1,fp,0);
        for(int i =0;i<max;i++){printf("%d\n",a1[i]);}
        modify(a2,fp,1);
        for(int i =0;i<max;i++){printf("%d\n",a2[i]);}
        modify(a3,fp,2);
        for(int i =0;i<max;i++){printf("%d\n",a3[i]);}
}
