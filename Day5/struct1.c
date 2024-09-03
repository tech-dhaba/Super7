//Design a structure to represent a student record containing name (string), roll number (int), and three subject marks (float).
//Optimize the structure for minimum memory usage by considering data alignment and padding.
//Calculate the size of the optimized structure and compare it to the original structure.
#include<stdio.h>
#include<string.h>
struct s
{
	char name[10];
	unsigned int rollno:3;
	unsigned int marks1:7;
	unsigned int marks2:7;
	unsigned int marks3:7;
};
int main()
{
	struct s s1;
	s1.rollno=3;
	s1.marks1=80;
	s1.marks2=78;
	s1.marks3=89;
	strcpy(s1.name,"abc");
	printf("Name is:%s\n",s1.name);
	printf("Roll.No. is:%d\n",s1.rollno);
	printf("marks1 are:%u\n",s1.marks1);
	printf("marks2 are:%u\n",s1.marks2);
	printf("marks3 are:%u\n",s1.marks3);
	printf("size of structure is:%ld\n",sizeof(struct s));
	return 0;
}
