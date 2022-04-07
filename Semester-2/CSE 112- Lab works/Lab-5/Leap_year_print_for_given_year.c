//Leap year print from 1901 to 2019.
#include<stdio.h>
int main()
{
    int i,a,b;//here, a=1901 & b=2019
    printf("Enter lower limit:");
    scanf("%d",&a);
    printf("Enter upper limit:");
    scanf("%d",&b);
    printf("\nLeap year are:\n");
    for(i=a; i<=b; i++)
    {
        if(i%4==0||i%400==0)
            printf("\t%d ",i );

    }
    return 0;
}





