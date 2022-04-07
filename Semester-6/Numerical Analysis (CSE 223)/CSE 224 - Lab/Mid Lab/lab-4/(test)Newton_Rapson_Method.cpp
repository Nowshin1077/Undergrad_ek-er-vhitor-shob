#include<stdio.h>
#include<stdio.h>
#include<math.h>
#define f(x) pow(x,2)- 3*x + 2;
#define fd(x) 3*pow(a,2)-8;
int main()
{
    double a,b,c,d,h,k,x,y;
    int i,j,m,n;
    printf("Enter the value of xn: ");
    scanf("%lf",&a);
    printf("Enter iteration number: ");
    scanf("%d",&n);
    printf("  xn           f(x)         f'(x)       hn= xn -f(x)/f'(xn)   xn+1=xn+h\n");
    printf("-----------------------------------------------------------------------------------------\n");
    for(i=1;i<=n;i++)
    {
    x=f(a);
    y=fd(x);
    h=-(x/y);
    k=h+a;
    printf(" %.7lf     %.7lf     %.7lf     %.7lf     %.7lf\n",a,x,y,h,k);
a=k;
    }
     printf("\nThe approximation to the root is %.6lf which is upto 6D",k);
    return 0;

}
