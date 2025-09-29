#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateArray(int arr[], int n, int k) {
    k = k % n; 
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int arr[] = {1, 2, 3, 4, 5,6,5,4,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr,n);
    int k;
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    rotateArray(arr, n, k);
    printf("Array after rotating by %d positions:\n", k);
    printArray(arr, n); 
}
