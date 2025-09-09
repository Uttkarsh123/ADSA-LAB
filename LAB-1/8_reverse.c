#include <stdio.h>

void main()
{
    int num=0;
    int rev=0;

    printf("Enter a number to reverse it:");
    scanf("%d",&num);
    while(num>0)
    {
        int rem = num%10;
        rev = 10*rev+rem;
        num=num/10;
    }
    printf("Reversed Number :%d",rev);
}