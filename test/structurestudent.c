//Define a stru`cture in C to represent a Student with the following attributes: name, roll_number, and marks. Write a function to initialize an array of Student structures with input from the user and another function to print the details of all students.
#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
} St_student;
void input(struct student *s,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter name of the student%d:\n",i+1);
		scanf("%s",s[i].name);
		printf("Enter roll.no. of the student%d:\n",i+1);
                scanf("%d",&s[i].rollno);
		printf("Enter marks of the student%d:\n",i+1);
                scanf("%f",&s[i].marks);
	}
}
void print(struct student *s,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Name:%s\n",s[i].name);
		printf("Roll.No.:%d\n",s[i].rollno);
		printf("Marks:%f\n",s[i].marks);
	}
}
int main()
{
	int n;
	printf("Enter the no. of students:");
	scanf("%d",&n);
	struct student s[5];
	input(&s[0],n);
	print(&s[0],n);
	return 0;
}
