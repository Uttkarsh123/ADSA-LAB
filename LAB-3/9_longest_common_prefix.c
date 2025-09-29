#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 100

void longestCommonPrefix(char strs[][MAX_LENGTH], int n, char result[]) {
    if (n == 0) {
        result[0] = '\0';
        return;
    }
    int prefixLen = strlen(strs[0]);
    for (int i = 1; i < n; i++) {
        int j = 0;
        while (j < prefixLen && strs[0][j] == strs[i][j]) {
            j++;
        }
        prefixLen = j;

        if (prefixLen == 0) {
            break; 
        }
    }
    strncpy(result, strs[0], prefixLen);
    result[prefixLen] = '\0';
}

int main() {
    char arr[MAX_STRINGS][MAX_LENGTH] = {
        "flower",
        "flow",
        "flight",
        "fluent",
        "flip"
    };

    int n = 5;
    char prefix[MAX_LENGTH];
     printf("Input strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
    longestCommonPrefix(arr, n, prefix);
    if (strlen(prefix) > 0)
        printf("Longest common prefix: %s\n", prefix);
    else
        printf("No common prefix found.\n");

    return 0;
}
