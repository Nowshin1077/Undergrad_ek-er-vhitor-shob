//C program to check whether an identifier is valid or not.
// For state diagram
/*
Given identifiers:
NUM        valid
Value_2    valid
5digit     invalid
NUM$       invalid
int        invalid
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int iskeyword(char* str)
{
    char keyword[32][10]=
    {
        "auto","double","int","struct","break","else",
        "long","switch","case","enum","register","typedef",
        "char","extern","return","union","continue","for",
        "signed","void","do","if","static","while","default",
        "goto","sizeof","volatile","const","float","short","unsigned"
    };

    int i;
    for(i = 0; i < 32; i++)
    {
        if(strcmp(str,keyword[i])==0)
        {
            return 0;
        }
    }
}

int main()
{
 char s[10];

 printf("\n Enter an identifier:");
 gets(s);

 if(iskeyword(s)==0)
    printf("\n Not a valid identifier\n");

 else
 {
     int i=0, state=0;
     char c;
     while(s[i]!='\0')
     {
         switch(state)  //suppose,input s[]= ab_2
         {
         case 0:
            c=s[i++];
            if(c=='_')
                state=0;
            else if(isalpha(c))
                state=1;
            else
                state=2;
            break;

         case 1:
             c=s[i++];
             if(c=='_'||isalpha(c)||isdigit(c))
                state=1;
             else
                state=2;
             break;

         case 2:
             c=s[i++];
             state=2;

             break;
         }
     }

     if(state==1)
      printf("\n Valid identifier\n ");
     else
      printf("\n Not a Valid identifier\n ");

         }
     }



