#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[100];
    char department[100];
    float salary;
};
void main()
{
    printf("Enter number of Employees: ");
    int n;
    scanf("%d", &n);

    struct Employee employee [n];

    for(int i=0; i<n; i++)
    {
        printf("\nEnter details for Employee %d\n", i+1);
        printf("Id: ");
        scanf(" %d", &employee[i].id);
        printf("Name: ");
        scanf(" %[^\n]", employee[i].name);
        printf("Department: ");
        scanf(" %[^\n]", employee[i].department);
        printf("Salary: ");
        scanf("%f", &employee[i].salary);
    }

      for (int i = 0; i < n; i++) {
        if (strcmp(employee[i].department, "IT") == 0) {
            employee[i].salary *= 1.10; 
        }
    }

     printf("\nAfter salary increase for IT department:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f, Department: %s\n",
               employee[i].id, employee[i].name, employee[i].salary, employee[i].department);
    }  
}