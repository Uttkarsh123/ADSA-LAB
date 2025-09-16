#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int countVowels(char *str) {
    bool lookup[256] = {false};

    lookup['a'] = lookup['e'] = lookup['i'] = lookup['o'] = lookup['u'] = true;
    lookup['A'] = lookup['E'] = lookup['I'] = lookup['O'] = lookup['U'] = true;

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (lookup[(unsigned char)str[i]]) {
            count++;
        }
    }

    return count;
}
void main() {
    char comment[] = "This is a Sample Comment with vowels!";
    printf("The String is: %s",comment);
    printf("\nVowel Count: %d\n", countVowels(comment));
}
