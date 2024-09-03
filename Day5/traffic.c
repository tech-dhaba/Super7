//Develop a C program to simulate a traffic light. Use an enum to represent the traffic light states (red, yellow, green). Implement a state machine using a switch-case to control the traffic light sequence. Utilize the goto statement to handle emergency situations, such as jumping to a flashing red state.
#include <stdio.h>
#include <unistd.h> // For sleep function

typedef struct
{
	unsigned int red:1;
	unsigned int yellow:1;
	unsigned int green:1;
}trafficlight;
#define red_mask (1<<0)
#define yellow_mask (1<<2)
#define green_mask (1<<3)
void set(trafficlight *light,unsigned int mask,int state)
{
	if(state)
	{
		*((unsigned int*)light)|=mask;
	}
	else
	{
		*((unsigned int*)light) &=~mask;
	}
}
void printlight(const trafficlight *light)
{
printf("Traffic Light State: Red: %d, Yellow: %d, Green: %d\n", light->red, light->yellow, light->green);
}
int main()
{
trafficlight light={0,0,0};
set(&light,red_mask,1);
printlight(&light);
set(&light,red_mask,0);
set(&light,yellow_mask,1);
printlight(&light);
set(&light,yellow_mask,0);
set(&light,green_mask,1);
printlight(&light);
set(&light, red_mask | yellow_mask | green_mask, 1);//turn on all the lights
printlight(&light);
set(&light, red_mask | yellow_mask | green_mask, 0);
printlight(&light);
return 0;
}
