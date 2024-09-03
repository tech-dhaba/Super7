#include<stdio.h>
#pragma pack(1)
struct abc{
	double y;
	char r;
	char s;
	char a[50];
	double v;
	char b[50];
	int x;
	int z;
	double p;
};
int main()
{
	printf("size of structure is:%d\n",sizeof(struct abc));
	return 0;
}
