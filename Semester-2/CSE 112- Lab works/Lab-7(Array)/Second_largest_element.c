//1)Find the second largest element of an array.
#include<stdio.h>

int main()
{
    int a[6]={6,10,15,30,29,4};
    int i,max1=0,max2=0;
    for(i=0;i<6;i++)
    {
        if(a[i]>max1)
        max1=a[i];
    }
    for(i=0;i<5;i++)
    {
        if(max1!=a[i])
        {
            if(max2<=a[i])
            max2=a[i];
        }
    }
    printf("Second largest element:%d\n",max2);
    return 0;
}
