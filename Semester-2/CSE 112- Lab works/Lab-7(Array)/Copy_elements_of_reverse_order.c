//4)Copy the elements of an array in reverse order.
#include <stdio.h>

int main()
{
    int a[10]= {1,2,3,4,5,6,7,8,9,10},b[10];
    int i,temp,n=10;

    for (temp=0,i=n-1; i>=0; temp++,i--)
    {
        b[temp]=a[i];
    }
    printf("Reverse array:");

    for(i=0; i<n; i++)

    {
        printf("\n%d",b[i]);
    }

    return 0;
}
