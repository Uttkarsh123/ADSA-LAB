#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }
    int first = -1;
    int second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < first && arr[i] > second) {
            second = arr[i];
        }
    }
    if (second == -1) {
        return -1;  
    }
    return second;
}

void main() {
    int arr[] = {4, 5, 1, 2, 5, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements: ");
    int result = findSecondLargest(arr, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    if (result == -1) {
        printf("\nNo second largest element found.\n");
    } else {
        printf("\nSecond largest element: %d\n", result);
    }
}
