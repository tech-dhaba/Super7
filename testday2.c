//Create a function that dynamically allocates memory for a structure containing an integer, a float, and a character array.
//Write a function to populate this structure with user-provided data.
//Finally, create a function to print the contents of the structure.
#include<stdio.h>
#include<stdlib.h>
typedef struct{
int a;
float b;
char c;
}sttr;

void user_input(sttr *ptr){
printf("enter int value\n");	
scanf("%d",&(ptr->a));
printf("enter float value\n");
scanf("%f",&(ptr->b));
printf("enter char value\n");
strcpy((ptr->c),'a');
}

int main(){
sttr str;	
sttr *ptr=(sttr*)malloc(sizeof(sttr));
ptr=&str;
user_input(&str);
printf("%d\n",ptr->a);
printf("%f\n",ptr->b);
printf("%c",ptr->c);
return 0;
}
