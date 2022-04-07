#include<stdio.h>

int main()
{
  	int arr[10], Size, i, Search, Flag;

  	printf("\n size of an array :  ");
  	scanf("%d",&Size);

  	printf("\n elements of an array: \n", Size);
  	for(i = 0; i < Size; i++)
   	{
   	 	scanf("%d",&arr[i]);
   	}

	printf("\n Search Element  :  ");
  	scanf("%d",&Search);

  	Flag = 0;
  	for(i = 0; i < Size; i++)
   	{
   		if(arr[i] == Search)
     	{
       		Flag = 1;
       		break;
	 	}
   	}

  	if(Flag == 1)
  	{
  		printf("\n We found the Search Element %d at Position %d ", Search, i + 1);
	}
	else
	{
		printf("\n Sorry!! not found", Search);
	}
  	return 0;
}
