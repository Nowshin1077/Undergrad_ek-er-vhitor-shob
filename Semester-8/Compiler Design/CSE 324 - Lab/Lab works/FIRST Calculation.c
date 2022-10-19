//FIRST SET CALCULATION.
#include<stdio.h>
#include<ctype.h>

void Find_First(char[], char);
void Array_Manipulation(char[], char);

int limit; //number of product
char production[25][25]; //product array

int main()
{
    char option;
    char ch;
    char array[25];
    int count;

    printf("\nEnter no. of productions: \t");
    scanf("%d", &limit);

    for(count=0; count < limit; count++) //input in production[][]
    {
        printf("Enter Productions Number [%d]:\t",count + 1);
        scanf("%s", production[count]);
    }
    do
    {
        printf("\nEnter a value to find first: \t");
        scanf("%c", &ch);
        Find_First(array, ch);
        printf("\nFirst Value of %c:\t{ ", ch);
        for(count = 0; array[count] != '\0'; count++) //print result array[]
        {
            printf(" %c ", array[count]);
        }
        printf("}\n");
        printf("To Continue, Press Y:\t");
        scanf("%c", &option);
    }
    while(option =='y'||option=='Y');
    return 0;
}

void Find_First(char* array, char ch)
{
    int count, j, k;
    char temp_result[20];
    int x;
    temp_result[0]='\0'; //clearing array
    array[0]='\0';

    if(!(isupper(ch)))
    {
        Array_Manipulation(array, ch);
        return ;
    }
    for(count=0; count<limit; count++)
    {
        if(production[count][0] == ch) //match ch in all production[] []
        {
            if(production[count][2] == '#') //if 2nd character is eps
            {
                Array_Manipulation(array, '#');
            }

            else
                {
                j = 2;
                while(production[count][j] !='\0') // check every 2nd char
                {
                    x = 0; //flag true (if there is any epsilon we have to put it)
                    Find_First(temp_result, production[count][j]); //recursively called
                    for(k=0; temp_result[k] != '\0'; k++)  //move temp_result
                    {
                        Array_Manipulation(array, temp_result[k]);
                    }
                    for(k = 0; temp_result[k] != '\0'; k++)
                    {
                        if(temp_result [k] == '#') //if first is eps, then break
                        {
                            x = 1;
                            break;
                        }
                    }
                    if(!x) // if x==0, j++ don't work, breaks while loop
                    {
                        break;
                    }
                    j++;

                }
            }
        }
    }

return;
}
void Array_Manipulation(char array[], char value)
{
    int temp;
    for(temp=0; array[temp]!='\0'; temp++) // check if value is already exists
    {

        if(array[temp]==value)
        {
            return;
        }
    }
    array[temp] = value; //keep value
    array[temp + 1] = '\0';
}
