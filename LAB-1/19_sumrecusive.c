#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d is");
}
