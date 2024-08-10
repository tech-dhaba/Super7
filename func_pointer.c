#if 0
#include<stdio.h>
typedef void (*fp)(int *);
void square(int *array)
{
	int i;
	int len = sizeof(array)/sizeof(int);
	for( i=0 ; i<len ; i++)
	{
		array[i]=array[i]*array[i];
	}
	printf("Square of array : %d",array[i]);
}
void double_array(int *array)
{	
	int i;
	int len = sizeof(array)/sizeof(int);
	for( i=0 ; i<len ; i++)
	{
		array[i]=2*array[i];
	}
	printf("Double: %d",array[i]);
}
void  multiply(int *array)                                                                                                                    {
        int len = sizeof(array)/sizeof(int);
	int n,i;
	printf("Enter a number to be multiplied: ");
	scanf("%d",&n);
        for( i=0 ; i<len ; i++)
        {
                array[i]=n*array[i];                                                                                                                    }
        printf("Double: %d",array[i]);
}
int cal(int *array,fp callback)
{
	callback(array);
}
int main()
{
static int arr[6]={1,2,3,4,5};
	printf("Square : %d",cal(arr,square));
	printf("double : %d",cal(arr,double_array));
	printf("multiply : %d",cal(arr,multiply));
	return 0;
}




#elif 0
//Write a C program that defines a structure to store student information (name, roll number, marks). Create an array of such structures. Write functions to:Sort the array based on marks.
//Find the student with the highest marks.
//Use a function pointer to call these functions based on user input.
//Additional Challenge:
//Extend the program to handle dynamic memory allocation for the array of structures. Implement error handling for memory allocation failures.
#include<stdio.h>
#include<string.h>
#define Max 5
#define max 100
struct std 
{
	char name[max];
	int roll_no;
	int marks;
}Student;
void sort_marks(struct std  *stud)
{
	//int len = sizeof(stud)/sizeof(int);
	for(int i=0 ; i<Max ; i++)
	{
		for(int j=i+1 ; j<Max ; j++)
		{
			if(stud[i].marks < stud[j].marks)
			{
				int temp = stud[i].marks;
				stud[i].marks = stud[j].marks;
				stud[j].marks = temp;
			}
		}
		printf("%d\n",stud[i].marks);
	}
	printf("Max: %d\n",stud[0].marks);
}
int main()
{
	struct std Student[Max];
	Student[0].roll_no = 1;
	strcpy(Student[0].name,"Khushdeep");
	Student[0].marks = 92;

        Student[1].roll_no = 2;
        strcpy(Student[0].name,"Deep");
        Student[1].marks = 95;

        Student[2].roll_no = 3;
        strcpy(Student[2].name,"Sanjana");
        Student[2].marks = 99;

        Student[3].roll_no = 4;
        strcpy(Student[3].name,"shivam");
        Student[3].marks = 97;

        Student[4].roll_no = 5;
        strcpy(Student[4].name,"khuranshu");
        Student[4].marks = 96;

	sort_marks(&Student);
	return 0;
}

#elif 1
//Write a C program that takes a pointer to a pointer to an integer as a function parameter. The function should allocate memory for an array of integers, initialize the array, and return the pointer to the allocated memory through the pointer to a pointer.
#include<stdio.h>



#else
#endif

