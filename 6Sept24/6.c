//Define a structure to represent a student's information (name, age, grade). Create an instance of the structure and access its members.
#include<stdio.h>
struct Student
{
	char name[20];
	int age;
	float grade;
};
int main()
{
	struct Student Student1;
	printf("Enter students name:\n");
	scanf("%s",Student1.name);
	printf("Enter age:\n");
	scanf("%d",&Student1.age);
	printf("Enter grade:\n");
	scanf("%f",&Student1.grade);
	printf("Name:%s\nAge:%d\nGrade:%f\n",Student1.name,Student1.age,Student1.grade);
	return 0;
}
