#include <stdio.h>
#include <conio.h>
int sentinel_linear_search(int arr[],int len,int ch)
{
    int last = arr[len-1];
    arr[len-1]= ch;
    int i=0;
    while(arr[i]!=ch)
    {
        i++;
    }

    arr[len-1]=last;

    if(i<len-1 || arr[len-1]==ch)
    {
        return i;
    }
    return -1;
}
void main()
{
    int arr[] = {25,26,24,35,84,12,10,54,47,16};
    int i=0;
    int length = sizeof(arr)/sizeof(arr[0]);

    int ch=0;
    printf("Enter the ID to be searched :");
    scanf("%d",&ch);
    int result = sentinel_linear_search(arr,length,ch);
    if(result==-1)
    {
        printf("ID not found");    
    }
    else{
        printf("ID found at %d index",result);
    }
}