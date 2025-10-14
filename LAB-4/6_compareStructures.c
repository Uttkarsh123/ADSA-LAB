//Illustrate with an example comparing two student structures.

#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNumber;
    char department[50];
};
int compareStudents(struct Student s1, struct Student s2)
{
    if(s1.rollNumber == s2.rollNumber && strcmp(s1.department, s2.department)==0 && strcmp(s1.department, s2.department)==0)
    {
        return 1;
    }
    return 0;
}
void main()
{
    struct Student student1, student2;
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf(" %s", student1.name);
    printf("Roll Number: ");
    scanf("%d", &student1.rollNumber);
    printf("Department: "); 
    scanf(" %s", student1.department);

    printf("Enter details for Student 2:\n");
    printf("Name: ");
    scanf(" %s", student2.name);
    printf("Roll Number: ");
    scanf("%d", &student2.rollNumber);
    printf("Department: "); 
    scanf(" %s", student2.department);

    if(compareStudents(student1, student2))
        printf("Both students are identical.\n");
    else
        printf("Students are different.\n");
}

