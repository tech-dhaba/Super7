#if 0
//String comparision 
char string_compare(char str1,char str2 )
{
	if(str1==str2)
	{
		printf("0 = Same String");
	}
	else if(str1>str2)
	{
		printf("1 = Different string");
	}
	else if(str1<str2)
	{
		printf("-1 = Different string");
	}
	else
	{
		printf("Same len but different string");
	}
}
int main()
{
	char string1="Hello";
	char string2="Helloworld";
	string_compare(string1,string2);
	return 0;
}



#elif 0
1. a
2. b
3. b
4. b
5. a

#elif 1
#include<stdio.h>

struct student 
{
	char name[20];
	int roll_number;
	float marks;
} St_student;
void get_detail(struct student *s){
	for (int i =0;i<5;i++){
	printf("naam daal \n");
	scanf("%s",s[i].name);
	printf("phone numver daal\n");
	scanf("%d",&s[i].roll_number);
	printf("marks\n");
	scanf("%f",&s[i].marks);
	}
}

void print_detail(struct student *s){
	for (int i =0;i<5;i++){
	printf("naam daal \n");
	printf("%s",s[i].name);
	printf("phone numver daal\n");
	printf("%d",s[i].roll_number);
	printf("marks\n");
	printf("%f",s[i].marks);
	}
}
int main()
{
	struct student s[5];
        get_detail(&s[0]);
	print_detail(&s[0]);
	return 0;
}


#else
#endif
#if 0
	}
}

struct student 
{
	char name[20];
	int roll_number;
	float marks;
};
int main()
{
	struct student s[5];
        s[0].roll_number = 01;
        strncpy(s[0].name,"Khushdeep",20);
	s[0].marks = 95;

	s[1].roll_number = 02;
        strncpy(s[1].name,"Sanjana",20);
        s[1].marks = 94;

	s[2].roll_number = 03;
        strncpy(s[2].name,"Shivam",20);
        s[2].marks = 90;

	s[3].roll_number = 04;
        strncpy(s[3].name,"Koushiki",20);
        s[3].marks = 80;

	s[4].roll_number = 05;
        strncpy(s[4].name,"Deep",20);
        s[4].marks = 97;

        printf("Student name : %s\n",s1.name);
        printf("Roll number : %d\n",s1.roll_number);
        printf("Marks obtained : %f\n",s1.marks);
        return 0;
}
#endif
