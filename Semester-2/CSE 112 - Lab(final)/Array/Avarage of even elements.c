//Find the Average of even elements of an array.
#include<stdio.h>

int main()
{
 int a[7]={3,2,4,13,16,10,55};
 int i,n=7,count=0;
 float sum=0,average;
 for(i=0;i<n;i++)
 {
     if(a[i]%2==0)
     {
         count++;
         sum=sum+a[i];
     }
}
 average=sum/count;
 printf("Average is:%.2f",average);
 return 0;
}

