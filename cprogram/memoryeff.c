#include <stdio.h>
//#pragma pack(1)
struct Student1 {
    char name[50];
    char shivam[3];   
    int rollNumber;
    int age;
    float marks;
};
struct Student2 {
    int rollNumber;
    int age;
    float marks;
    char name[50];    
};

struct Student3 {
    int rollNumber;
    char name[50];    
    int age;
    float marks;
};

int main() {
    struct Student1 student1;
    struct Student2 student2;
    struct Student3 student3;
    printf("Size of struct Student1: %zu bytes\n", sizeof(student1));
    printf("Size of struct Student2: %zu bytes\n", sizeof(student2));
    printf("Size of struct Student3: %zu bytes\n", sizeof(student3));
    return 0;
}

