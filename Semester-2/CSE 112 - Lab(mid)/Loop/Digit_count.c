//Count Digit.
#include <stdio.h>

int main()
{
    int count=0;
    long long n;
    scanf("%lld",&n);
    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("total digit:%d",count);
    return 0;
}
