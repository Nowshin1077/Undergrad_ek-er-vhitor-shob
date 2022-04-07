//5)Find the square root of the elements of an array.
#include<stdio.h>
#include<math.h>
int main()
{
    int a[6]={4,9,13,25,100,308};
    int i,n=6;
    float b[6];
    for(i=0;i<n;i++){
        b[i]=sqrt(a[i]);

    }
    printf("square root of the elements:");
    for(i=0;i<n;i++)
    {
        printf("\n%.1f",b[i]);
    }
    return 0;
}
