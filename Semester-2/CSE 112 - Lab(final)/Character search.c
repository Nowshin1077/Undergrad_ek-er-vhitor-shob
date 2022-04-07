#include <stdio.h>
#include <string.h>

int main()
{
    char a, word[50];
    int i, count = 0, flag = 0;

    printf("Enter character: ");
    scanf("%c", &a);
    printf("Now enter the word: ");
    scanf("%s", word);
    printf("Positions of '%c' in %s are: ", a, word);
    for (i = 0; i < strlen(word); i++)
    {
        if (word[i] == a)
        {
            flag = 1;
            printf("%d  ", i + 1);
            count++;
        }
    }
    if (flag)
    {
        printf("\nCharacter '%c' occured for %d times.\n", a, count);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}
