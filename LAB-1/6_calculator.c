#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;
    char ch;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);

    printf("Choose the Operation you want to perform (+, -, /, *):");
    scanf(" %c",&ch);

    switch (ch)
    {
    case '+':
        printf("%d",num1+num2);
        break;
    case '-':
        printf("%d",num1-num2);
        break;
    case '*':
        printf("%d",num1*num2);
        break;
    case '/':
        printf("%d",num1/num2);
        break;
    default:
        printf("Wrong Choice");
        break;
    }
}