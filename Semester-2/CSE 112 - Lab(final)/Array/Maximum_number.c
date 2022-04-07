//A C Program to Find the maximum Number in an Array.

#include <stdio.h>

int main()
{

        int array[50], size, i, max;

        printf("\n Enter the size of the array: ");
	scanf("%d", &size);

        printf("\n Enter elements of  the array: ", size);

        for (i = 0; i < size; i++)
		scanf("%d", &array[i]);

        max = array[0];

        for (i = 1; i < size; i++)
        {
		if (max < array[i])
			max = array[i];
	}

        printf("\n Maximum number is : %d",max);

        return 0;
}
