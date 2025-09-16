#include <stdio.h>
#include <conio.h>
void swap_XOR(int *a , int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void swap_arithmetic(int *a , int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void main()
{
    int num1=56,num2=67;
    printf("Numbers Before Swapping Num1 : %d Num2 : %d",num1,num2);
    swap_XOR(&num1,&num2);
    printf("\nNumbers AFter Swapping Num1 : %d Num2 : %d",num1,num2);
    swap_arithmetic(&num1,&num2);
    printf("\nNumbers After Swapping Again Num1 : %d Num2 : %d",num1,num2);
}