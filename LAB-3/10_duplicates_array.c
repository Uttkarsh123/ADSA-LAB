#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true; }
        } }
    return false;
}

int main() {
    int n=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    if (containsDuplicate(nums, n)) {
        printf("Yes Duplicate Elements exist\n");
    } else {
        printf("No Duplicates Dont Exist\n");
    }
    return 0;
}
