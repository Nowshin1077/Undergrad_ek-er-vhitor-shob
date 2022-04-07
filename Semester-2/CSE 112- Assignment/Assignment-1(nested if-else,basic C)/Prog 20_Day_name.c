#include<stdio.h>
int main()
{
    int day_number;
    printf("Enter day number:");
    scanf("%d",&day_number);
    switch(day_number)
    {
    case 1:
    printf("Saturday");
    break;
    case 2:
    printf("Sunday");
    break;
    case 3:
    printf("Monday");
    break;
    case 4:
    printf("Tuesday");
    break;
    case 5:
    printf("Wednesday");
    break;
    case 6:
    printf("Thursday");
    break;
    case 7:
    printf("Friday");
    break;
    default:
    printf("Wrong Input");

    return 0;

    }
}
