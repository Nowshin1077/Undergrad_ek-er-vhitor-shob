/*A c program to convert Kilometer per hour to miles per hour.*/
#include<stdio.h>
int main()
{
    float kilometer,mile;
    printf("Enter the value of km per hour:");
    scanf("%f",&kilometer);
    mile=0.621371*kilometer;
    printf("Miles per hour:%.2f",mile);
    return 0;
}

