#if 0
#include <stdio.h>
#define SIZE 10
int main(){
int i;
int number[i];
printf("Enter %d integer",SIZE);
for(i=0 ; i<SIZE ; i++)
{
printf("Enter integer : ",i +1);
scanf("%d",&number[i]);

}
for(i=SIZE ; i>=0 ; i--){
printf("In reverse :",number[i]);
}
return 0;
}




#elif 0
//Count set bit
#include<stdio.h>
int count_set_bit(int num)
{
	int count = 0;
	int len = sizeof(num)*8;
	for(int i=0 ; i<len ; i++)
	{
		if(num&1)
		{
			count = count+1;
		//	num = num<<1;
		}
		num=num>>1;
	}
	return count;
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int c = count_set_bit(n);
	printf("Count : %d",c);
	return 0;
}

#elif 0
#include<stdio.h>
int reverse_bit(int num)
{
	//int len = (sizeof(num)*8)-1;
	for(int i=sizeof(num)*8-1 ; i>=0 ; i--)
	{
		if(num&(1<<i))
		{
			printf("1");
			//num<<i;
		}
		else
		{
			printf("0");
			//num<<i;
		}
	}
//	printf("\n");
}
int main()
{
	int n;
	printf("Enter integer : ");
	scanf("%d",&n);
	int result = reverse_bit(n);
//	printf("%d",result);
	return 0;
}






#elif 1
#include<stdio.h>
int main(){
int x =1;

char *ptr = (int*)&x;
if(*ptr == 1)
{

printf("________________________________________________________YOUR SYSTEM IS__________________________________________________\n");
	printf("                                                Little Endian                                                     ");
}
else
	printf("Big Endian");
return 0;
}







#else
#endif
