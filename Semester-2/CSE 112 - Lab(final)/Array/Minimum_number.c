//A C Program to Find the minimum Number in an Array.

#include <stdio.h>

int main()
{

        int ar[50], size, i, min;//mini=minimum number.

        printf("\n Enter the size of the array: ");
	scanf("%d", &size);

        printf("\n Enter elements of  the array: ", size);

        for (i = 0; i < size; i++)
		scanf("%d", &ar[i]);

        min = ar[0];

        for (i = 1; i < size; i++)
        {
		if (min > ar[i])
			min = ar[i];
	}

        printf("\n Minimum number is : %d", min);

        return 0;
}

