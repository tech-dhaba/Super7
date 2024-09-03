//Develop a C program that simulates a simple state machine using an enum for states and a switch-case construct for state transitions. The program should demonstrate the use of the goto statement for unconditional jumps within the state machine to achieve specific state transitions based on certain conditions.
#include<stdio.h>
        int add(int a,int b)
        {
                return a+b;
        }
        int sub(int a,int b)
        {
                return a-b;
        }
        int mul(int a,int b)
        {
                return a*b;
        }
        int div(int a,int b)
        {
                return a/b;
        }
enum{
        summer,
        spring,
        autoum,
        winter
};
int main()
{
        int n=5;
        int m=5;
addition:
        printf("%d\n",add(n,m));
//      goto last;
        //break;
subtraction:
        printf("%d\n",sub(n,m));
//      goto last;
        //break;
multiplication:
        printf("%d\n",mul(n,m));
//      goto last;
        //break;
division:
        printf("%d\n",div(n,m));
        goto last;
//      break;

        for(int i=summer ; i<=winter ; i++)
        {
                switch(i)
                {
                        case summer:
                                //printf("%d\n",add(n,m));
                                goto addition;
                                break;
                        case spring:
                                //printf("%d\n",sub(n,m));
                                goto subtraction;
                                break;
                        case autoum:
                                //printf("%d\n",mul(n,m));
                                goto multiplication;
                                break;
                        case winter:
                                //printf("%d\n",div(n,m));
                                goto division;
                                break;
                        default:
                                printf("default");
                }
        }
last:
        return 0;
}
