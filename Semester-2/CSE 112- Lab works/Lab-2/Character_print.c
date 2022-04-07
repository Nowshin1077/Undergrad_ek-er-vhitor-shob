//Print a character twice in the same line.
#include<stdio.h>
int main()
{
   char A;
    printf("Enter any character:");
    scanf("%c %c",&A,&A);
    printf("ch=%c %c",A,A);
    return 0;
}
