#include<stdio.h>
#include<string.h>
typedef struct{
 char name [50];
 int age ;
 char gender;
 unsigned char a :2;
 unsigned char b :2;
 unsigned char o :2;
 unsigned char ab :2;
 unsigned char rh :2;
 union {
 long number;
 long landline;	
	}num;
}blood;

typedef enum{
A_plus,
A_minus,
B_plus,
B_minus,
O_plus,
O_minus,
AB_plus,
AB_minus,
RH_plus,
RH_minus,
}bloodtype;

void modify(blood *mod,bloodtype type){
 switch (type){
 case A_plus:
mod->a=2;
break;
case A_minus:
mod->a=1;
break;
case B_plus:
mod->b=2;
break;
case B_minus:
mod->b=1;
break;
case O_plus:
mod->o=2;
break;
case O_minus:
mod->o=1;
break;
case AB_plus:
mod->ab=2;
break;
case AB_minus:
mod->ab=1;
break;
case RH_plus:
mod->rh=2;
break;
case RH_minus:
mod->rh=1;
break;
}
}	
int main(){
blood a;
strcpy(a.name,"tejsaw");
printf("name = %s\n",a.name);
a.age=21;
printf("age= %d\n",a.age);
a.gender='M';
printf("gender = %c\n",a.gender);
a.num.number=9555709533;
printf("Mob number = %ld\n",a.num.number);
bloodtype type;
type=B_plus;
modify(&a,type);
switch(type){
case 0:	
{printf("the blood group A+\n");break;}
case 1:
{printf("the blood group A-\n");break;}
case 2:	
{printf("the blood group B+\n");break;}
case 3:
{printf("the blood group B-\n");break;}
case 4:	
{printf("the blood group O+\n");break;}
case 5:
{printf("the blood group O-\n");break;}
case 6:
{printf("the blood group AB+\n");break;}
case 7:
{printf("the blood group AB-\n");break;}
case 8:	
{printf("the blood group RH+\n");break;}
case 9:
{printf("the blood group RH-\n");break;}
}
}
