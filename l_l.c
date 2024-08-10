#if 0
#include<stdio.h>
#define max 3
typedef struct st
{
	int data;
	struct st *next;
}node;
int main()
{
	node ll[max];
	node *temp_ll;
	ll[0].data=1;
	ll[1].data=2;
	ll[2].data=3;

	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = NULL;
	temp_ll = &ll[0];
	while(temp_ll != NULL)
	{
		printf("Data is :%d\n",temp_ll->data);
		temp_ll = temp_ll->next;
	}
	return 0;
}



#elif 1
#include<stdio.h>
#define MAX 3
typedef struct ll
{
	
}





#else
#endif
