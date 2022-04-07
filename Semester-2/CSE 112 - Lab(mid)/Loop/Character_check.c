//Simple Character check.
#include <stdio.h>

int main()
{
    char C;
    scanf("%c",&C);
    if(C>='a' || C>='A')
        printf("%c is an alphabet",C);
    else
        printf("%c is not an alphabet",C);
    return 0;
}
