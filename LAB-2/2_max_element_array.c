#include <stdio.h>
#include <conio.h>
int max_linear_search(int arr[],int n)
{
    int i=0,max=0;
    if(n==0)
        return -1;
    else
    {
        max = arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        return max;
    }
    return -1;
}
int max_sorting(int arr[],int n){
    int i=0,j=0,max=0;
    if(n==0)
        return -1;
    else{
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j]= arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        return arr[n-1];
    }
    return -1;
}
void main()
{
    int arr[] = {25,26,24,35,84,12,10,54,47,16};
    int i=0;
    int length = sizeof(arr)/sizeof(arr[0]);

    int max_ls = max_linear_search(arr,length);
    int max_s = max_sorting(arr,length);

    printf("----Array----\n");
    for(i=0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nMaximum Number usingLinear Search: %d",max_ls);
    printf("\nMaximum Number using Sorting: %d",max_s);
}