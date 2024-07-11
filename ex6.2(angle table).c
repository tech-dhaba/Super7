/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int step = 30;
    int max_angle = 360;
    int angle ;
    
    for(angle =0; angle<=max_angle; angle+=step){
        double radian = angle*M_PI/180;
        double sine_value =sin(radian);
        printf("%d,%f\n",angle,sine_value);
    }
 
  

    return 0;
}