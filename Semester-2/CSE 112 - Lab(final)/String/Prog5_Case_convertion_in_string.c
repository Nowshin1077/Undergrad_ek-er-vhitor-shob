//A C program to change case from upper to lower in a string.
#include <stdio.h>
#include <string.h>

int main()
{
   char s[50];
   int i;
   printf("In Upper case:");
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]>=65&&s[i]<=90)
       {
           s[i]=s[i]+32;
       }
   }

   printf("\nIn Lower case:%s",s);

   return  0;
}
