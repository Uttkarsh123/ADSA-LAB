#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    int i=0, count=0;
    printf("Enter the String:");
    scanf("%s",str);

    for(i=0;i<strlen(str);i++)
    {
        char ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}