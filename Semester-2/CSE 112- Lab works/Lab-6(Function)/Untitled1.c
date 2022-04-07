#include<stdio.h>
int main()
{
    int n;
    int a,b,x,i;//variable for fibbo
    int c,pos,j,z;//variable for prime
    scanf("%d",&n);//enter position
    if(n%2!=0)//if position is odd then calculate fibbo
    {
        a=1;
        b=1;
        if(n==1||n==3)
        {
            printf("%d",a);
        }
        else
        {
            for(i=2; i<(n/2+1); i++)
            {
                x=a+b;
                a=b;
                b=x;
            }
            printf("%d",x);
        }
    }
    else//if position is even then calculate prime
    {
        pos=n/2;//for prime position
        z=1;
        for(i=1; i<100; i++)
        {
            c=0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    c=c+1;

                }
            }
            if(c==2)
            {
                if(z++==pos)
                {
                    printf("%d",i);
                    break;
                }
            }
        }
    }
    return 0;
}
