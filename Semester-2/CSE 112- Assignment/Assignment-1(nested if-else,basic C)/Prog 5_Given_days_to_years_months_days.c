#include<stdio.h>
int main()
{
    int days,years,months;
    printf("Enter days:");
    scanf("%d",&days);
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    printf("%d year(s)\n%d month(s)\n%d day(s)",years,months,days);
    return 0;
}
