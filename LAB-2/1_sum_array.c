#include <stdio.h>
#include <conio.h>

int recursive_sum(int arr[], int n)
{
    if(n==0)
        return 0;
    else
        return arr[n-1]+recursive_sum(arr,n-1);
}
int iterative_sum(int arr[], int n)
{
    int sum=0,i=0;
    for(i=0;i<n;i++)
    {
        sum= sum+arr[i];
    }
    return sum;
}
void main()
{
    int arr[] = {25,26,24,35,84,12,10,54,47,16};
    int i=0;
    int length = sizeof(arr)/sizeof(arr[0]);
    int sum =iterative_sum(arr,length);

    printf("----Array----\n");
    for(i=0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nSum of the above array iteratively is:%d",sum);
    sum = recursive_sum(arr,length);
    printf("\nSum of the above array recursively is:%d",sum);
}