#include<stdio.h>

int main()
{
    int a[10000],i,x,y,n,sum=0,t,count=0,ks=1;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d",&n);
        for(i=0; i<n-1; i++)
        {
            scanf("%d",&a[i]);
            sum = sum + a[i];
        }
        count = (n*(n+1))/2;

        //printf("%d",count);
        printf("Case #%d: %d\n",ks++,count-sum);
    }
    return 0;

}



