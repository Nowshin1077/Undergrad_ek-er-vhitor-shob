#include<stdio.h>
int main()
{
    char grade;
    printf("Enter a Grade:");
    scanf("%c",&grade);
    switch(grade)
    {
    case'F':
    printf("Your Grade:Failed");
    break;
    case'A':
    printf("Your Grade is:Average");
    break;
    case'G':
    printf("Your Grade is:Good");
    break;
    case'V':
    printf("Your grade is:Very Good");
    break;
    case'E':
    printf("Your Grade is:Excellent");
    break;
    default:
    printf("Your input is wrong");

    return 0;
    }
}
