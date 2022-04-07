//6)Find the difference and absolute value of an array.
#include<stdio.h>
int main()
{
    int a[50]={5,4,3,2,1,6,2},b[50];
    int i,j,sum=0;
    for(i=0,j=1;i<7 && j<8;i++,j++)
    {
        b[i]=abs(a[i]-a[j]);
    }
    printf("Difference: ");
    for(i=0;i<6;i++){
        printf("%d ",b[i]);
        sum=sum+b[i];
    }
     printf("\n");
    printf("\nThe summation is:%d\n",sum);

    return 0;
}



