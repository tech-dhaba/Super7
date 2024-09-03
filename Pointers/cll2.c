//find the length of circular linked list and print it
#include<stdio.h>
#include<stdlib.h>
#define max 4
/*struct Node
{
	int data;
	struct Node*next;
};
int main()
{
	struct Node arr[max],*temp;
	int i;
	for(i=0;i<max;i++)
	{
		arr[i].data=i+1;
		if(i<max-1)
		{
			arr[i].next=&arr[i+1];
		}
		else
		{
			arr[i].next=&arr[0];
		}
	}
	temp=&arr[0];
	for(i=0;i<10;i++)
	{
		printf("Data is %d\n",temp->data);
		temp=temp->next;
	}
	int lenght=0;
	temp=&arr[0];
	while(temp!=&arr[0])
	{
		++i;
	}
	printf("length is:%d\n",i);
	return 0;
}*/
int main()
{
	char c;
	c=75;
	printf("%c",c);
	c='b';
	return 0;
}
