#include<stdio.h>
#include<string.h>

void main()
{
    int i, j = 0, k = 0,n = 0;
    int flag = 0;

    char str[100], new[100], word[100];

    printf("\nEnter String: ");
    gets(str);

    printf("\n\nEnter the Word to Delete: ");
    gets(word);

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        k = i;

        while(str[i] == word[j])
        {
            i++,j++;
            if(j == strlen(word))
            {
                flag = 1;
                break;
            }
        }
    j = 0;

    if(flag == 0)
        i = k;
    else
        flag = 0;

    new[n++] = str[i];
    }

    new[n] = '\0';

    printf("\n\nAfter Deleting Word: %s\n",new);

    return 0;
}
