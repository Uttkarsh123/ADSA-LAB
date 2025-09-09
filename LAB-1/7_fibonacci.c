#include <stdio.h>
#include <conio.h>

void main()
{
    int a =0,b=1,i=0,c=0;
    int terms =0;
    printf("Enter Number of terms in series :");
    scanf("%d",&terms);

    if(terms ==0)
        printf("No series printed for 0 terms");
    else if (terms ==1)
    {
        printf("Fibonacci Series :%d",a);
    }
    else if (terms==2)
    {
        printf("Fibonacci Series :%d,%d",a,b);
    }
    else{
        printf("Fibonacci Series : %d,%d,",a,b);
        while(i<(terms-2))
        {
            c=a+b;
            printf("%d,",c);
            a=b;
            b=c;
            i++;
        }
    }
    


}