#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
    char department[30];
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Department: ");
    scanf("%s", e.department);

    printf("\nEmployee Details\n");

    printf("Employee ID = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Salary = %.2f\n", e.salary);
    printf("Department = %s\n", e.department);

    return 0;
}
