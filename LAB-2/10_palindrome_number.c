#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindromeString(int num) {
    char str[20];
    sprintf(str, "%d", num);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev = 10 * rev + rem;
        n = n / 10;
    }
    return rev;
}
int check_palindrome(int orig, int reverse)
{
    return orig == reverse;
}
void main()
{
    int num = 0;
    printf("Enter a number to check palindrome it:");
    scanf("%d", &num);
    printf("Number is Palindrome: %d",check_palindrome(num,reverse(num)));

    //Checking Palindrome using string
    if(isPalindromeString(num))
    {
        printf("\n%d is a palindrome.\n", num);
    } 
    else 
    {
        printf("\n%d is not a palindrome.\n", num);
    }
}