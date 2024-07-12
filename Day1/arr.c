#include<stdio.h>

int main(){
	int n,i;
	int arr[]= {1,2,3,4,5,6,7,8};
	//p=&arr[i];
	printf("Enter size of arr:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//*arr++;
		printf("%d ",arr[i]);

	}
	int maxindex=0;
	for(i=1;i<n;i++){
		if(arr[i]>arr[maxindex]){
			maxindex=i;
		}
	}
	printf("%d",arr[maxindex]);

	
	return 0;
}
