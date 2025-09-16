#include<stdio.h>
#include<conio.h>
void natural_number_recursion(int num)
{
    if(num==0)
        return ;
    natural_number_recursion(num-1);
    printf("%d ",num);
}
void natural_number_iteration(int num)
{
    int i=0;
    for(i=1;i<=num;i++)
    {
        printf("%d ",i);
    }
}
void main()
{
    int num=0;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("N Natural Numbers using :\n");
    natural_number_iteration(num);
    printf("\n N Natural Numbers using Recursion:\n");
    natural_number_recursion(num);
}