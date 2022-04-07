/*A C program to take input an array and calculate the distance between two alongside
elements.*/
#include<stdio.h>
int main()
{
    int a[50]={5,4,3,2,1,6,2},b[50];
    int i,j;
    for(i=0,j=1;i<7 && j<8;i++,j++)
    {
        b[i]=abs(a[i]-a[j]);
    }
    printf("Difference: ");
    for(i=0;i<6;i++){
        printf("%d ",b[i]);
    }
     printf("\n");


    return 0;
}






