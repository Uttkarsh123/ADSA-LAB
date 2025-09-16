#include<stdio.h>
int factorial(int n)
{
    if(n==0|| n==1)
        return 1;
    else
        return n * factorial(n-1);
}
int factorial_iterative(int num)
{
    if(num==0 ||num==1)
        return 1;
    else
    {
        int fact =1;
        while(num>0)
        {
            fact= fact*num;
            num--;
        }
        return fact;
    }
}
void main()
{
    int num=6;
    printf("Number is %d",num);
    printf("\nFactorial (recursively) : %d",factorial(num));
    printf("\nFactorial (iteratively) : %d",factorial_iterative(num));
}
