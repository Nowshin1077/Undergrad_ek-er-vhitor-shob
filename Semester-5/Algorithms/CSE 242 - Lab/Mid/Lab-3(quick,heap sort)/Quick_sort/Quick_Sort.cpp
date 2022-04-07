#include<stdio.h>

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition (int A[], int low, int high)
{
	int pivot = A[high];
	int i = (low - 1);

	for (int j = low; j <= high- 1; j++)
	{

		if (A[j] < pivot)
		{
			i++;
			swap(&A[i], &A[j]);
		}
	}
	swap(&A[i + 1], &A[high]);
	return (i + 1);
}


void quickSort(int A[], int low, int high)
{
	if (low < high)
	{

		int pi = partition(A, low, high);

		quickSort(A, low, pi - 1);
		quickSort(A, pi + 1, high);
	}
}


void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}


int main()
{
	int A[] = {10, 7, 8, 9, 1, 5};
	int n = sizeof(A)/sizeof(A[0]);
	quickSort(A, 0, n-1);
	printf("Sorted Aay: \n");
	printArray(A, n);
	return 0;
}
