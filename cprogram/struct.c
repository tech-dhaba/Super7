#include<stdio.h>
#include<string.h>
typedef struct {
 char name[10];
char mid;
int id;
char last[10];
}sname,ename;
int main()
{
	sname x;
	ename y;
	strcpy(x.name,"tejsaw");
	strcpy(x.last,"bhasker");
	printf("%s",x.name);
	printf("%s",x.last);
	printf("%ld",sizeof(ename));
	printf("%ld",sizeof(sname));
	
	
	
}
