#include <stdio.h>

#define MAX_EMPLOYEES 100

// Define the employee structure
struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i;
    struct Employee employees[MAX_EMPLOYEES];

    // Get the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Get the details of each employee
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee name: ");
        scanf("%s", employees[i].ename);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find the employee with the highest salary
    int max_index = 0;
    for (i = 1; i < n; i++) {
        if (employees[i].salary > employees[max_index].salary) {
            max_index = i;
        }
    }

    // Display the details of the employee with the highest salary
    printf("Employee with highest salary:\n");
    printf("Employee number: %d\n", employees[max_index].eno);
    printf("Employee name: %s\n", employees[max_index].ename);
    printf("Salary: %.2f\n", employees[max_index].salary);

    return 0;
}

