
//A C program to change case from  lower to upper  in a string.
#include <stdio.h>
#include <string.h>

int main()
{
   char s[50];
   int i;
   printf("In Lower case:");
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]>=97&&s[i]<=65)
       {
           s[i]=s[i]+32;
       }
   }

   printf("\nIn Upper case:%s",s);

   return  0;
}
