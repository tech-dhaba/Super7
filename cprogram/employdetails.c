#include <stdio.h>
#include <string.h>
typedef struct {
    int dept_id;
    char dept_name[21]; 
} Department;
typedef struct {
    int id;
    char name[21]; 
    Department dept;
} Employee;

void setEmployee(Employee *emp, int id, const char *name, int dept_id, const char *dept_name) {
    emp->id = id;
    strncpy(emp->name, name, sizeof(emp->name) - 1);
    emp->name[sizeof(emp->name) - 1] = '\0'; // Ensure null termination
    emp->dept.dept_id = dept_id;
    strncpy(emp->dept.dept_name, dept_name, sizeof(emp->dept.dept_name) - 1);
    emp->dept.dept_name[sizeof(emp->dept.dept_name) - 1] = '\0'; // Ensure null termination
}

void printEmployee(const Employee *emp) {
    printf("Employee ID: %d\n", emp->id);
    printf("Employee Name: %s\n", emp->name);
    printf("Department ID: %d\n", emp->dept.dept_id);
    printf("Department Name: %s\n", emp->dept.dept_name);
}

int main() {
    Employee emp;
    setEmployee(&emp, 1, "Tejsaw", 2111, "Engineering");
    printEmployee(&emp);
    return 0;
}

