#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
};

void main()
{
    struct Student *students_calloc;
    struct Student *students_malloc;

    students_calloc = (struct Student *) calloc(5, sizeof(struct Student));
    students_malloc = (struct Student *) malloc(5 * sizeof(struct Student));

    for (int i = 0; i < 5; i++) {
        printf("Using calloc - Student %d: ID = %d, Name = '%s'\n", i + 1, students_calloc[i].id, students_calloc[i].name);
    }

    for(int i = 0; i < 5; i++) {
        printf("Using malloc - Student %d: ID = %d, Name = '%s'\n", i + 1, students_malloc[i].id, students_malloc[i].name);
    }


}