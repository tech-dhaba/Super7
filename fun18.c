#include<stdio.h>
double calculatvalue(double x)
{
   return ((2*x*x)+(2*x)-3);
}
int main()
{
    double x,y;
    
    printf("X     |    Y\n");
    printf("-----------\n");
    for(x=-5.0;x<=5.0;x+=0.5)
    {
       y=calculatvalue(x);
    

    printf("%5.1f   %5.2f\n",x,y);
    }
    return 0;

}
