#include<stdio.h>


void pv(void *ptr, int size)
{
        if(size==1)
        {
		size=sizeof(int);
                printf("Integer value is :%d \n", *(int*)ptr);
        }
        else if(size==2)
        {
		size=sizeof(char);
                printf("float value is :%c \n", *(char*)ptr);
        }
        else if(size==3)
        {
		size=sizeof(float);
                printf("char value is :%f \n", *(float*)ptr);
        }
        else
        {
                printf("ERROR");
        }
}
int main()
{
	int a=10;
	char b='d';
	float c=3.6;
	pv(&a,1);
	pv(&b,2);
	pv(&c,3);
	return 0;
}
