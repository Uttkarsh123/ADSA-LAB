#include <stdio.h>
#include <conio.h>

long factorial(int num)
{
    if(num==1 || num==0)
        return 1;
    else
        return num*factorial(num-1);
}

void main()
{
    int num;
    printf("Enter a number to find the factorial :");
    scanf("%d", &num);

    long fact = factorial(num);
    printf("Factorial of %d is %ld",num,fact);
}