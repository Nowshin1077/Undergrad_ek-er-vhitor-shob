//Vowel or Constant Check.
#include <stdio.h>

int main()
{
    char C;
    int upcasevol,lowcasevol;
    scanf("%c",&C);
    upcasevol=(C=='a' || C=='e' || C=='i' || C=='o' || C=='u');
    lowcasevol=(C=='A' || C=='E' || C=='I' || C=='O' || C=='U');
    if(upcasevol || lowcasevol)
        printf("%c is a vowel",C);
    else
        printf("%c is a constant",C);
    return 0;
}
