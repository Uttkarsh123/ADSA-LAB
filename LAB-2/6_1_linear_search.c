#include <stdio.h>
#include <conio.h>
int basic_linear_search(int arr[],int len,int ch)
{
    int i=0;
    for(i=0;i<len;i++)
    {
        if(ch==arr[i])
        {
            return i;
        }
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
    int result = basic_linear_search(arr,length,ch);
    if(result==-1)
    {
        printf("ID not found");    
    }
    else{
        printf("ID found at %d index",result);
    }
}