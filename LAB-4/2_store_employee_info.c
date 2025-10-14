/*Write a program to store and display information of n employees using an array of
structures.*/

#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    char department[100];
    float salary;
};

void main()
{
    int n;
    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    struct Employee employee[n];

    printf("Enter Employee Details:\n");
    for(int i =0;i<n;i++)
    {
        printf("\nEmployee %d\n", i+1);
        printf("Id: ");
        scanf(" %d", &employee[i].id);
        printf("Name: ");
        scanf(" %[^\n]", employee[i].name);
        printf("Department: ");
        scanf(" %[^\n]", employee[i].department);
        printf("Salary: ");
        scanf("%f", &employee[i].salary);
    }

    printf("\nEmployee Details:\n");
    for(int i =0;i<n;i++)
    {
        printf("\nEmployee %d\n", i+1);
        printf("Id: %d\n", employee[i].id);
        printf("Name: %s\n", employee[i].name);
        printf("Department: %s\n", employee[i].department);
        printf("Salary: %.2f\n", employee[i].salary);
    }
}