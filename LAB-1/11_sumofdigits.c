#include <stdio.h>

void main()
{
    int num=0;
    int sum=0;

    printf("Enter a number find sum of digits:");
    scanf("%d",&num);
    while(num>0)
    {
        int rem = num%10;
        sum = sum + rem;
        num=num/10;
    }
    printf("Sum of digits :%d",sum);
}