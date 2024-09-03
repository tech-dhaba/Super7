//Write a C program that defines a structure to store student information (name, roll number, marks). Create an array of such structures. Write functions to:

//Sort the array based on marks.
//Find the student with the highest marks.
//Use a function pointer to call these functions based on user input.
#include<stdio.h>
#define max 20
typedef struct
{
	char name[max];
	int roll;
	int marks;
}student;
void sort(student *st,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(st[i].marks > st[j].marks)
			{
				student temp;
				temp=st[i];
				st[i]=st[j];
				st[j]=temp;
			}
		}
		printf("Student%d\n",st[i].roll);
		printf("%s\n",st[i].name);
		printf("%d\n",st[i].roll);
		printf("%d\n",st[i].marks);
	}
}
int main()
{
	student st[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Student%d name is:\n",i+1);
		scanf("%s",st[i].name);
		printf("enter roll no.:\n");
		scanf("%d",&st[i].roll);
		printf("Enter marks:\n");
		scanf("%d",&st[i].marks);
	}
	sort(st,3);
	return 0;
}
