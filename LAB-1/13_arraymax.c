#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[] = {21,23,14,15,28,19,10,9,22,61};
    int i=0,max=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("Maximum Number in array: %d",max);
}