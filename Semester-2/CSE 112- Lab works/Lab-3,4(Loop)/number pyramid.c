//number pyramid.
#include<stdio.h>

int main()
{
	int i,j,l=1;
	for(i=1; i<=5; i++)
	{
		for(j=4; j>=i; j--)
		{
			printf(" ");
		}

		for(j=1; j<=l; j++)
		{
			printf("%d",j);
		}
			l = l+2;
	    printf("\n");
	}
    return 0;
}
