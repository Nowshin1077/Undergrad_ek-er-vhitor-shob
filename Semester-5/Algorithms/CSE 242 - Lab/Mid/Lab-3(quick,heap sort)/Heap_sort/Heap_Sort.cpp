#include<istream>
using namespace std;



void max_heapify(int A[], int n, int i)
{
    int temp=0;
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;


	if (l < n && A[l] > A[largest])
		largest = l;


	if (r < n && A[r] > A[largest])
		largest = r;


	if (largest != i)
	{
		//swap(A[i], A[largest]);
		temp=A[i];
		A[i]=A[largest];
		A[largest]=temp;


		max_heapify(A, n, largest);
	}
}


void heapSort(int A[], int n)
{

	for (int i = n / 2 - 1; i >= 0; i--)
		max_heapify(A, n, i);


	for (int i=n-1; i>=0; i--)
	{

		swap(A[0], A[i]);

		max_heapify(A, i, 0);
	}
}


void printArray(int A[], int n)
{
	for (int i=0; i<n; ++i)
		printf("%d\n",A[i]);

}


int main()
{
	int A[100],n,i;
	printf("Enter the number of Elements: \n");
	scanf("%d",&n);
	printf("Enter the Numbers to be sorted: \n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);

	//int n = sizeof(A)/sizeof(A[0]);


	heapSort(A, n);

    printf("Sorted array in ascending order:\n");
	printArray(A, n);
}
