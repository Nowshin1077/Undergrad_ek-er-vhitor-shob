//A C program for Fibonacci series generation.
#include <stdio.h>
int main()
{
    int i,n,a=0,b=1,temp=0;                     //a=first,b=second
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        i=a;
        printf("%d ",a);
        temp=a+b;
        a=b;
        b=temp;
    }
    return 0;
}
