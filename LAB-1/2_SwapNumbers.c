// A cashier mistakenly enters two values in reverse. Write a program to swap them.

#include <stdio.h>
#include <conio.h>
void main()
{
    int num1=20,num2=50;
    printf("Numbers before Swapping : num1 = %d and num2 =%d",num1, num2);

    scanf("%d", &num1);

    int temp = num1;
    num1=num2;
    num2=temp;
    printf("\nNumbers after Swapping : num1 = %d and num2 =%d",num1, num2);   
}