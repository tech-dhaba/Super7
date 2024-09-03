//Create a structure to represent a traffic light system using bit fields for red, yellow, and green light states.
//Implement functions to turn on/off individual lights and check the current state of the traffic light.
//Demonstrate how to use bitwise operators to manipulate the bit fields efficiently.
#include<stdio.h>
typedef struct{
	unsigned int red:1;
	unsigned int yellow:1;
	unsigned int green:1;
}traffic_light;
#define RED_MASK 0x01;
#define YELOW_MASK 0x02;
#define GREEN_MASK 0x04;
void turn_on_light(traffic_light *light,unsigned int mask)
{
	*(unsigned int*)light |=mask;
}
void turn_off_light(traffic_light *light,unsigned int mask)
{
        *(unsigned int*)light &= ~mask;
}
int islighton(int traffic_light *light,unsigned int mask)
{
	return (*(unsigned int*)light & mask!=0);
}
int main()
{
	traffic_light light={0};
	turn_on_light(&light, RED_MASK);
	printf("Red light:%s\n",islighton(&light,RED_MASK));

}
