#include<stdio.h>

int main()
{
      int hours, minutes, total_minutes;
      printf("\nEnter the Time in Hours and Minutes:\n");
      printf("\nHours:");
      scanf("%d", &hours);
      printf("\nMinutes:");
      scanf("%d", &minutes);
      total_minutes = (hours * 60) + minutes;
      printf("\nTotal Time in Minutes:\t%d\n", total_minutes);
      return 0;
}
