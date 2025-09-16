#include<stdio.h>
#include<conio.h>

void check_even_odd_modulo(int num)
{
    if(num %2==0)
        printf("\n%d is Even",num);
    else
        printf("\n%d is Odd",num);
}
void check_even_odd_bitwise(int num)
{
    if(num & 1)
        printf("\n%d is Odd",num);
    else
        printf("\n%d is even",num);
}
void main()
{
    int arr[] = {25,26,24,35,84,12,10,54,47,16};
    int i=0;
    int length = sizeof(arr)/sizeof(arr[0]);

    //Checking odd even using Modulus Operator
    for(i=0;i<length;i++)
    {
        check_even_odd_modulo(arr[i]);
    }
    printf("\n-----Bitwise Operator------");
    //Checking odd even using bitwise Operator
    for(i=0;i<length;i++)
    {
        check_even_odd_bitwise(arr[i]);
    }
}