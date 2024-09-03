#include<stdio.h>
#include<stdlib.h>
#define max 3
typedef struct ll
{
	int data;
	struct ll *next;
}node;
int main()
{
	node LL[max],*tmp;
	for(int i=0;i<max;i++)
	{
		LL[i].data=i+1;
		if(i<max-1)
		{
			LL[i].next=&LL[i+1];
		}
		else
		{
			LL[max-1].next=NULL;
		}
	}
	tmp=&LL[0];
	while(tmp!=NULL)
	{
		printf("data is %d\n",tmp->data);
		tmp=tmp->next;
	}
	return 0;
}
