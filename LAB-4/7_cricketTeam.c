#include <stdio.h>
struct Team {
    char name[50];
    int runs;
    int wickets;
};
void main() {
    int n=11;
    struct Team players[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Player %d\n", i + 1);
        printf("Name: ");
        scanf(" %s", players[i].name);
        printf("Roll Number: ");
        scanf("%d", &players[i].runs);
        printf("Marks: ");
        scanf("%f", &players[i].wickets);
    }
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (players[i].runs > players[maxIndex].runs) {
            maxIndex = i;
        }
    }
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", players[maxIndex].name);
    printf("Roll Number: %d\n", players[maxIndex].runs);
    printf("Marks: %f\n", players[maxIndex].wickets);
}


