#include<stdio.h>
int main()
{
    int i=1,n=5;
    for(; ;){
    printf("%d*%d=%d\n",n,i,n*i);
    i=i+1;
    if(i>10){
    break;
    }
    }
    return 0;
}
