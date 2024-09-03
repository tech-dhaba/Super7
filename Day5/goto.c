#include<stdio.h>
/*void even_or_odd(int num)
{
	if(num%2==0)
		//jump to even
		goto even;
	else
		goto odd;
even:
	printf("%d is even",num);
	return;
odd:
	printf("%d is odd",num);
}
int main()
{
	int n;
	printf("enter no.:");
	scanf("%d",&n);
	even_or_odd(n);
	return 0;
}*/
#include<stdio.h>
void nos(int num)
{
	int n=1;
start:
	printf("%d\n",n);
	n++;
	if(n<=10)
		goto start;
}
int main()
{
	int n;
	nos(n);
	return 0;
}
