//Find the Average of odd index of an array.

#include<stdio.h>

int main()
{
 int a[7]={3,2,4,13,16,10,55};
 int i,n=7;
 float average,count=0,sum=0;
 for(i=0;i<7;i++)
 {
     if(i%2==1)
     {
         sum=sum+a[i];
         count++;
     }
}
 average=sum/count;
 printf("Average is:%.3f",average);
 return 0;
}

