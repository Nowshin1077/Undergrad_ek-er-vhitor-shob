#include<stdio.h>
int main()
{
    int m=0,n,i;
    for(n=1;n<=20;n=n+1){
    m=m+n;
    for(i=1;i<=10;i=i+1){

    printf("%d*%d=%d\n",n,m,i);
    }
    }

    return 0;
}
