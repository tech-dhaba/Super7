//Function Table:
//Create a function table containing pointers to different functions. Use this table to invoke the appropriate function based on an input value.

#include<stdio.h>

enum functions {
	ADD,
	SUB,
	MUL,
	DIV
};

struct calci {
	enum functions func;
	int(*fp)(int, int);
};

int add(int a, int b) {
	return a+b;
}

int sub(int a, int b) {
	return a-b;
}

int mul(int a, int b) {
	return a*b;
}

int div(int a, int b) {
	return a/b;
}

int main() {
	struct calci cal[4];
	
	cal[ADD].func = ADD;
	cal[ADD].fp = add;

	cal[SUB].func = SUB;
	cal[SUB].fp = sub;

	cal[MUL].func = MUL;
	cal[MUL].fp = mul;

	cal[DIV].func = DIV;
	cal[DIV].fp = div;

	int choose,a,b;

	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);

	printf("Select one option 0.add\n 1.sub\n 2.mul\n 3.div\n");
	scanf("%d",&choose);

	if(choose >= 0 && choose <= 3) {
		int result = cal[choose].fp(a,b);
		printf("%d",result);
	}
}

		 







