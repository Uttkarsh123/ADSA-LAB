#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
void main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].rollNumber);
    printf("Marks: %f\n", students[maxIndex].marks);
}


