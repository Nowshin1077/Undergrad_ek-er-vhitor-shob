//A C program to sort elements of array in ascending  order.
#include <stdio.h>

int main()
{
	int a[50],n,i,j;
	printf("Array size: ");
        scanf("%d",&n);
        printf("Elements: ");

      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] > a[i])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\nAscending : ");
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}


	return 0;
}
