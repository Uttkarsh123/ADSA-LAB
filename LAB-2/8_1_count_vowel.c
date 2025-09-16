#include<stdio.h>
#include<ctype.h>
void main()
{
    char str[]="Advanced Data Structures";
    int count=0;
    printf("String = %s",str);

    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }

    for(int i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }
    printf("\nVowels = %d",count);

}