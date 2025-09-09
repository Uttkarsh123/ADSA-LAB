#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int mid = (left + right) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target < arr[mid])
        return binarySearch(arr, left, mid - 1, target);
    else
        return binarySearch(arr, mid + 1, right, target);
}

void main() {
    int arr[] = {101, 104, 108, 112, 118, 123, 130};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the Book ID to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        printf("Book ID %d found at index %d.\n", target, result);
    else
        printf("Book ID %d not found in the library.\n", target);
}
