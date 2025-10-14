#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
};
void main()
{
    int intialSize = 2;
    int newCount = 3;
    struct Student* students = malloc(intialSize * sizeof(struct Student));

     for (int i = 0; i < intialSize; i++) {
        printf("\nEnter details for Student", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %s", students[i].name);
    }

    struct Student* temp = realloc(students, (intialSize+newCount)*sizeof(struct Student));
    students = temp;

    printf("\nEnter details for %d new students:\n", newCount);

    for (int i = intialSize; i < (intialSize + newCount); i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %s", students[i].name);
    }

    printf("\nAll Students:\n");
    for (int i = 0; i < (intialSize + newCount); i++) {
        printf("Student %d: ID=%d, Name=%s\n", i + 1, students[i].id, students[i].name);
    }
}