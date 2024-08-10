#include<stdio.h>
/*
typedef int (*fp)(int x,int y);
int add(int x, int y){
	return x+y;
}

int sub(int x, int y){
	return x-y;
}


int mul(int x, int y){
	return x*y;
}

int calc(int x, int y, fp callback){
	return(callback(x,y));
}
*/
int main(int argc, char **argv){
/*
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
*/
printf(" add is %d\n", atoi(argv[1])+atoi(argv[2]));// /*(calc(num1,num2,add))*/);
if (strcmp("Add",argv[3])==0)
{

	printf(" add is %d\n", atoi(argv[1])+atoi(argv[2]));// /*(calc(num1,num2,add))*/);
}

return 0;
}
