#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks<0)
        printf("Invalid");
    switch(marks/5)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        printf("Grade:F \nG.p: 0.00");
        printf("\nPoor result");
        break;
    case 8:
        printf("Grade:D \nG.p: 2.00");
        break;
    case 9:
        printf("Grade:C \nG.p: 2.25");
        break;
    case 10:
        printf("Grade:C+ \nG.p: 2.50");
        break;
    case 11:
        printf("Grade:B- \nG.p: 2.75");
        break;
    case 12:
        printf("Grade:B  \nG.p: 3.00");
        break;
    case 13:
        printf("Grade:B+ \nG.p: 3.25");
        break;
    case 14:
        printf("Grade:A- \nG.p: 3.50");
        break;
    case 15:
        printf("Grade:A  \nG.p: 3.75");
        printf("Well done!");
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        printf("Grade:A+ \nG.p: 4.00");
        printf("\nExcellent!");
        break;
    default:
        printf("Invalid");
    }
    return 0;
}
