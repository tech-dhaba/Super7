#include <stdio.h>

int main() {
 float w;
 float h;
 float covt;
 float bmi;
 printf("Enter your  in kg weight:");
 scanf("%f",&w);
 printf("Enter your  in m hight:");
 scanf("%f",&h);
 covt = h/100;
 bmi = w/(covt*covt);
 if(bmi<18.5){
     printf("You are underweight:%f",bmi);
 }
 else if (bmi>=18.5 && bmi<24.9){
     printf("You have a normal weight:.%f",bmi);
 }
 else if (bmi>=25 && bmi<29.9){
     printf("You have a over weight:%f",bmi);
 }
 else if (bmi>=30){
     printf("You have obesity:%f",bmi);
 }
 

    return 0;
}
