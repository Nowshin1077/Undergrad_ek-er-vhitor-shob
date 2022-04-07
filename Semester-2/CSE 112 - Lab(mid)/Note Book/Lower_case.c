#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a char:");
    scanf("%c",&ch);
    if(ch>='A' && ch<'a')
    printf("Upper case latter\n");
    else if(ch>='a'&& ch<'z')
    printf("Lower case latter\n");
    else
    printf("Special char\n");
    return 0;

}
