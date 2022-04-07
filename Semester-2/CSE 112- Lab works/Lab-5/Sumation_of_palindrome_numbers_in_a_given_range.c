//Summation of palindrome numbers in a given range.

#include<stdio.h>
int main()
{
    int i,a,b,reverse,remainder,sum,result;//here,a=121 & b=1001
    printf("Enter lower limit:");
    scanf("%d",&a);
    printf("Enter upper limit:");
    scanf("%d",&b);
    for(i=a; i<=b; i++)
    {
        reverse=0;
        sum=0;
        result=i;

        for(; result!=0; )
        {
            remainder=result%10;
                      reverse=reverse*10+remainder;
            result=result/10;
        }
        if(i==reverse)
        printf("%d\n",i);
     sum=reverse+sum;

    }
    return 0;
}
