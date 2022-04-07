//A C program to find number of vowel and consonant in a given string.
#include <stdio.h>
#include<string.h>

int main()
{
  	char str[100];
  	int i, vowels, consonants;
  	i = vowels = consonants = 0;

  	printf("Enter any letter:");
  	gets(str);

  	while (str[i] != '\0')
  	{
  		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
  			vowels++;
 		}
  		else
    		consonants++;
    	i++;
	}
    printf("\nNumber of Vowels = %d", vowels);
	printf("\nNumber of Consonants = %d", consonants);

  	return 0;
}
