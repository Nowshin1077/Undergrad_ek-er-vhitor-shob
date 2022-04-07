//A c program of addition in 1D matrix.
#include <stdio.h>
int main()
{
	int i,sum=0;
	int a[50]={4,6},b[50]={6,3};
	for (i=0; i<2 ;i++)
	{
		sum=a[i]+b[i];
	}
	printf("summation:%d",sum);
	return 0;
}
