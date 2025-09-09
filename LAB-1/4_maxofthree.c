#include <stdio.h>
#include <math.h>
void main()
{
    int num1=20, num2=10,num3=40;
    if(num1 >num2)
    {
        if(num1>num3)
            printf(" %d is largest",num1);
        else
            printf("%d is largest",num3);
    }
    else
    {
         if(num2>num3)
            printf(" %d is largest",num2);
        else
            printf("%d is largest",num3);
    }
}