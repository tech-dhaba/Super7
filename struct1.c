//Define a structure Employee that contains the following fields:
//id (integer)
//name (20 characters)
//department (a nested structure with dept_id (integer) and dept_name (20 characters))
//Implement functions to set and print the Employee details including the nested department information.
//Bit Field Operations
#if 1

#include<stdio.h>
#include<string.h>
struct           ////placeholder (it does'nt initlizie)
{
	int id;
	char name[20];
	struct dept
	{
		int dept_id;
		char dept_name[20];
	}department;
} E1;

int main() 
{
	E1.id = 50;
	strncpy(E1.name,"Khushdeep",20);
	E1.department.dept_id = 88;
	strncpy(E1.department.dept_name,"Electronics",20);


	printf("Employee id : %d\n",E1.id);
	printf("Employee name : %s\n",E1.name);
	printf("Department id : %d\n",E1.department.dept_id);
	printf("Department name : %s\n",E1.department.dept_name);
	return 0;
}


















#else
#endif
