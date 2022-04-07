#include<stdio.h>

int fact(int);
int main()
{
    int x,n;
    printf("The Number to Find Factorial :");
    scanf("%d",&n);

    x=fact(n);
    printf("Factorial of %d is %d",n,x);

}
int fact(int n)
{
    if(n<1)
        return(1);
    else
    return(n*fact(n-1));
}
