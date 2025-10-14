//Write a program to swap two complex numbers using a struct.
#include <stdio.h>
struct complex_num{
    int real;
    int imaginary;
};

void main()
{
    struct complex_num num1, num2;
    printf("Enter the real and imaginary part of First complex number: ");
    scanf("%d %d", &num1.real, &num1.imaginary);

    printf("Enter the real and imaginary part of Second complex number: ");
    scanf("%d %d", &num2.real, &num2.imaginary);

    printf("Before swapping:\n");
    printf("First complex number: %d + %di\n", num1.real, num1.imaginary);
    printf("Second complex number: %d + %di\n", num2.real, num2.imaginary);

    int temp_real = num1.real;
    int temp_imaginary = num1.imaginary;

    num1.real = num2.real;
    num1.imaginary = num2.imaginary;

    num2.real = temp_real;
    num2.imaginary = temp_imaginary;

     printf("After Swapping:\n");
    printf("First complex number: %d + %di\n", num1.real, num1.imaginary);
    printf("Second complex number: %d + %di\n", num2.real, num2.imaginary);
}
