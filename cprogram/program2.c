#include <stdio.h>
int large(int *a,int len)
{ 
int n=a[0]; 
for (int i =0;i<len;i++)
    {
	if(n<a[i])
	   n=a[i];
    }
return(n); 
}
int main ()
{
	int array[]={1,2,4,5,6,8,9,0,12,44,45};
        int c=large(array,sizeof(array)/4);
        printf("the largest number of array = %d\n",c);
        return 0;
}
