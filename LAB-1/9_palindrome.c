#include <stdio.h>

void main()
{
    int num = 0;
    int rev = 0;

    printf("Enter a number to check palindrome it:");
    scanf("%d", &num);
    int n = num;
    while (n > 0)
    {
        int rem = n % 10;
        rev = 10 * rev + rem;
        n = n / 10;
    }

    if (num == rev)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}