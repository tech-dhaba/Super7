#include <stdio.h>

enum season {
    summer,
    winter,
    monsoon,
    spring
};

add:
int add(int a, int b) { 
            printf("the sum = %d\n", a+b);
	goto last;
 }
sub:
int sub(int a, int b) { 
            printf("the difference = %d\n",a-b);
	   goto last;
	
 }
div:
int di(int a, int b) { 
            printf("the division = %d\n", a/b);
	 goto last;
	 }
mul:
int mul(int a, int b) { 

            printf("the multiplication = %d\n", a*b);
goto last;
 }
last:
int main() {
    int a = 8, b = 4;
    enum season math;
    math = winter;

    switch (math) {
        case summer:
	goto add;
        case winter:
	goto sub;
        case monsoon:
	goto div;
        case spring:
	goto mul;
        default:
            printf("Invalid season\n");
    }

    return 0;
}



