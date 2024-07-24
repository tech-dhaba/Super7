#include <stdio.h>
const int MAX_SUBJECTS = 5; 
struct Student {
    int rollNumber;
    char name[50];
    int marks[MAX_SUBJECTS];
    volatile float percentage; 
};
void calculatePercentage(struct Student *student) {
    int totalMarks = 0;
    for (int i = 0; i < MAX_SUBJECTS; ++i) {
        totalMarks += student->marks[i];
    }
    student->percentage = ((float)totalMarks / MAX_SUBJECTS)*100;
}
int main() {
    struct Student student1 = { 1, "tejsaw", {80, 75, 90, 85, 95}, 0.0 };
    calculatePercentage(&student1);
    printf("Student Roll Number: %d\n", student1.rollNumber);
    printf("Student Name: %s\n", student1.name);
    printf("Student Marks:\n");
    for (int i = 0; i < MAX_SUBJECTS; ++i) {
        printf("Subject %d: %d\n", i + 1, student1.marks[i]);
    }
    printf("Student Percentage: %.2f%%\n", student1.percentage);
    return 0;
}

