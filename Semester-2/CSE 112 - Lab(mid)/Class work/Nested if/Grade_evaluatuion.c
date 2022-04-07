#include<stdio.h>
int main()
{
    int n;
    printf("Enter your marks :");
    scanf("%d",&n);
    if((n<0)&&(n>100))
    printf("wrong input");
    else if((n<40)&&(n>0))
    printf("Fail");
    else if((n>=40)&&(n<45))
    printf("Grade:D");
    else if((n>=45)&&(n<50))
    printf("Grade:C-");
    else if((n>=50)&&(n<55))
    printf("Grade:C+");
    else if((n>=55)&&(n<60))
    printf("Grade:B-");
    else if((n>=60)&&(n<65))
    printf("Grade:B");
    else if((n>=65)&&(n<70))
    printf("Grade:B+");
    else if((n>=70)&&(n<75))
    printf("Grade:A-");
    else if((n>=75)&&(n<80))
    printf("Grade:A");
    else
    printf("Grade:A+");

    return 0;

}
