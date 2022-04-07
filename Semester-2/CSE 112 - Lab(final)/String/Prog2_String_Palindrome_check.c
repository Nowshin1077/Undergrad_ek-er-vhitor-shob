//A program to check whether a string is palindrome or not.
#include<stdio.h>
#include <string.h>

int main()
{
   char s1[20], s2[20];
   int i,n, length = 0;

   printf("Enter string: ");
   gets(s1);

   for (i = 0; s1[i] != '\0'; i++)
   {
      length++; //this will calculate the length of given s1    s1=text;s2=reverse_text
   }
   //Reverse the original text and store into s2
   for (i = length - 1; i >= 0; i--)
   {
      s2[length - i - 1] = s1[i];
   }

   //Check whether reverse_text is same to original text
   for (n = 1, i = 0; i < length; i++)
   {
      if (s2[i] != s1[i])
      n = 0;
   }

   if (n == 1)
      printf("%s is a palindrome.", s1);
   else
      printf("%s is not a palindrome", s1);
getch();
   return 0;
}

