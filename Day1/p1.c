#include<stdio.h>

int cal(int *x,int *y,char *op){
	switch(*op){
		case '+':
			return *x+*y;
		case'-':
			return *x-*y;
		case'*':
			return (*x)*(*y);
		case'/':
			if(y!=0)
				return (*x)/(*y);
			else{
				printf("error division");
				return 0;
		}
		default:
			printf("error");
			return 0;


	}
}

int main(){
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	char op;
	printf("enter operator:\n ");
	scanf(" %c",&op);
	printf("Result= %d\n",cal(&a,&b,&op));
	return 0;

}
