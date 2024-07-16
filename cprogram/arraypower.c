#include<stdio.h>
#include<math.h>
void power(int *a,int ln)
{
	for(int i=0;i<ln;i++)
	{
//	int c=1;
	  //int b=a[i];
	 // while(b!=0)
	  //{
	//	 c=c*2;
	//	b--;
	 // }
         a[i]= 2>>a[i];	
	 printf("%d\n",a[i]);
	}
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8};
	power(a,8);
}
