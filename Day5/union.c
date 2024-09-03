//union and structure
#include<stdio.h>
typedef struct{
	int x;
	int y;
}point;
int main()
{
	point p1;
	point p2;
	p1.x=1;
	p1.y=2;
	p2.x=3;
	p2.y=4;
	int *s1=&p1;
	int *s2=&p2;
	printf("%d\n",s1->x);
	printf("%d\n",s2->x);
	printf("%d\n",s1->y);
        printf("%d\n",s2->y);
	return 0;

}
