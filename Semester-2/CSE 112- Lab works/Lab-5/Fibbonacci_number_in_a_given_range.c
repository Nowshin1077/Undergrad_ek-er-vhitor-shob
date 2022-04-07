//Fibonacci number in a range.
#include<stdio.h>
int main()
{
    int i,a=0,b=1,temp,X,Y;
    printf("Enter lower limit:");//X=
    scanf("%d",&X);
    printf("\nEnter upper limit:");//Y=
    scanf("%d",&Y);
    printf("Fibonacci Numbers Are:");
    for(i=0;i<=Y;i++)
    {
    if(a>X)
    printf("\n%d",a);
    temp=a+b;
    a=b;
    b=temp;
    }
    return 0;
}
