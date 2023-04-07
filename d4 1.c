#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Designation: ");
    scanf("%s", emp.designation);

    printf("Enter Employee Department: ");
    scanf("%s", emp.department);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee ID: %d", emp.id);
    printf("\nEmployee Name: %s", emp.name);
    printf("\nEmployee Designation: %s", emp.designation);
    printf("\nEmployee Department: %s", emp.department);
    printf("\nEmployee Salary: %.2f", emp.salary);

    return 0;
}
