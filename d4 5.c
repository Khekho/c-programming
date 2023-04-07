#include <stdio.h>
#include <string.h>

// Structure for holding employee details
struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct employee emp[n];
    
 
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    

    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[max_index].salary) {
            max_index = i;
        }
    }
    

    printf("\nDetails of employee with the highest salary:\n");
    printf("Employee number: %d\n", emp[max_index].eno);
    printf("Employee name: %s\n", emp[max_index].ename);
    printf("Salary: %.2f\n", emp[max_index].salary);

    return 0;
}
