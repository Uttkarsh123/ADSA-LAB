// Write a program where a struct for date is nested inside a struct for student.

#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    char dept[20];
    struct Date
    {
        int day;
        int month;
        int year;
    } dob;
};

void main()
{
    printf("Enter student details:\n");
    struct student s1;

    printf("Enter the Name of the student: ");
    scanf("%[^\n]", s1.name);

    printf("Enter the Roll number of the student: ");
    scanf("%d", &s1.roll);
    getchar();

    printf("Enter the Department of the student: ");
    scanf("%[^\n]", s1.dept);
    
    printf("Enter the Date of Birth of the student (dd mm yyyy): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Department: %s\n", s1.dept);
    printf("Date of Birth: %02d/%02d/%04d\n", s1.dob.day, s1.dob.month, s1.dob.year);
}