#include<stdio.h>
#include<string.h>
typedef struct data {
	char name[50];
	int rollno;
	int marks;
};

void sort(struct data students, int size);
void findandprint(struct data students, int size);
void print(struct data students, int size);
void findtop(struct data students, int size);

int main() {
	data students{} = {
		{"Shivam",55,89},
		{"Sarika",66,98},
		{"Kushal",45,80},
		{"Tejsaw",83,78},
		{"Kaushiki",19,77}
	};
	int size = sizeof(marks) / sizeof(int);
	void (*fp)(students[],int) = sort;
	void (*fp1)(students[],int) = findandprint;

	int num = 0;
	switch(num) {
	case 1:
                (*fp)(students, size);
                printf("Students sorted by marks:\n");
                for (int i = 0; i < n; i++) {
                    print(students[i]);
                }
                break;
            case 2:
                (*fp1)(students, size);
                break;
            default :
		printf("Invalid\n");
		break;
	}
	void sort(struct data students, int size) {
	for (int i=0; i<size; i++) {
	if(marks[i] > marks[i+1]) {
		num = marks[i];
		marks[i] = marks[i+1];
		marks[i+1] = num;
	}
       	printf("Marks : %d\n",marks[i]);
	}
}
	data top = students[0];
	for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
void findAndPrint(struct data students[], int size) {
    data top = findtop(students, size);
    printf("Student with the highest marks:\n");
    print(top);
}
void print(struct data students) {
    printf("Name: %s\n", students.name);
    printf("Roll Number: %d\n", students.rollno);
    printf("Marks: %.d\n", students.marks);
}
}
