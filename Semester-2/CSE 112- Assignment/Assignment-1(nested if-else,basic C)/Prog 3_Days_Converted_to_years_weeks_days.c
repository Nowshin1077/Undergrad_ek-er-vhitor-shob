#include<stdio.h>

int main()
{
    int days,weeks,years;

    printf("Enter the number of the days:");
    scanf("%d",&days);

    years=(days/365);
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));

    printf("\nYear(s):%d\n",years);
    printf("Week(s):%d\n",weeks);
    printf("Day(s):%d\n",days);

    return 0;

}
