#include <stdio.h>
void main()
{
    int arr[] = {4, 5, 1, 2, 5, 3, 7};
    int target;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the target Value:");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

}