#include<stdio.h>
void main ()
{

    char c[150];
    int i=2, a=0;

    printf("Enter the line of code:");
    gets(c);

    if(c[0]=='/')
    {
        if(c[1]=='/')
            printf("It is a single line comment \n");

        else if (c[1]=='*')
        {
            for(i=2; i<=150; i++)
            {
                if (c[i]=='*' && c[i+1]=='/')
                {
                    printf("It a multiple line comment");
                    a=1;
                    break;
                }
                else
                    continue;
            }
            if(a==0)
            {
                printf("It is not a comment \n");


            }
        }
        else
            printf("It is not a comment \n");


    }
    else
        printf("It is not a comment \n");

    return 0;
}



