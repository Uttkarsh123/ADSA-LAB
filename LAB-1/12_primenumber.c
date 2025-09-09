#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool check_prime(int num)
{
    int i=0;
    if(num<=1)
        return false;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

void main()
{
    int num=0,i=0;

    printf("Enter a number to check whether its prime or not");
    scanf("%d",&num);

    bool res = check_prime(num);
    if(res)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
}