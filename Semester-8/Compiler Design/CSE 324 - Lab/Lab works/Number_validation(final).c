//C program to test whether a number is valid or not.
//Identify integer,real,float and exponent number.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[20];

    printf("\nEnter a number: ");
    gets(s);

    int i=0, state=0;
    char c;
    while(s[i]!='\0')
    {
        switch(state)
        {
        case 0:
            c=s[i++];
            if(isdigit(c))
                state=1;
            else
                state=7;
            break;
        case 1:
            c=s[i++];
            if(isdigit(c))
                state=1;
            else if (c=='.')
                state=2;
            else if(c=='E'||c=='e')
                state=4;
            else
                state=7;
            break;
        case 2:
            c=s[i++];
            if(isdigit(c))
                state=3;
            else
                state=7;
            break;
        case 3:
            c=s[i++];
            if(isdigit(c))
                state=3;
            else if(c=='E'||c=='e')
                state=4;
            else
                state=7;
            break;
        case 4:
           c=s[i++];
            if(c=='+'||c=='-')
                state=5;
            else if(isdigit(c))
                state=6;
            else
                state=7;
            break;
        case 5:
            c=s[i++];
            if(isdigit(c))
                state=6;
            else
                state=7;
            break;
        case 6:
            c=s[i++];
            if(isdigit(c))
                state=6;
            else
                state=7;
            break;
        case 7:
            c=s[i++];
            state=7;
            break;
        }
    }
if(state==1)
    printf("\nInteger number\n ");
else if(state==3)
    printf("\nFloat number\n ");
else if(state=6)
    printf("\nExponent number\n ");
else
    printf("\nNot a valid number");
}
