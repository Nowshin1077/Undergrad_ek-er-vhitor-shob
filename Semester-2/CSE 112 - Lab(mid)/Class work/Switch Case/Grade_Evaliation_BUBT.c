#include<stdio.h>
int main()
{
    int mark;
    printf("Enter any integer number between 0 to 100:");
    scanf("%d",&mark);
    switch(mark/5)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    printf("\nFailed!");
    break;
    case 8:
    printf("Grade:D  \nG.P  :2.00");
    break;
    case 9:
    printf("Grade:C  \nG.P  :2.25");
    break;
    case 10:
    printf("Grade:C+ \nG.P  :2.50");
    break;
    case 11:
    printf("Grade:B- \nG.P  :2.75");
    break;
    case 12:
    printf("Grade:B  \nG.P  :3.00");
    case 13:
    printf("Grade:B+ \nG.P  :3.25");
    break;
    case 14:
    printf("Grade:A- \nG.P   :3.50");
    break;
    case 15:
    printf("Grade:A  \nG.P  :3.75");
    break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    printf("Grade:A+ \nG.P  :4.00");
    break;
    default:
    printf("invalid  input\n");
    }
    return 0;
}
