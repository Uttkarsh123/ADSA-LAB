#include <stdio.h>
#include <string.h>
void reverse_string(char strng[])
{
    int right = strlen(strng)-1;
    int left =0;

    while(left < right)
    {
        char temp = strng[right];
        strng[right]= strng[left];
        strng[left]= temp;

        left++;
        right--;
    }
}
void main()
{
    char username[] ="User@123";
    printf("Username :%s",username);
    reverse_string(username);
    printf("\nUsername after reversing using two pointer %s:",username);
}