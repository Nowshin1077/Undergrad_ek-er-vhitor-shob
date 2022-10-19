//Compiler Design Lab task-1
//C program for Pattern Searching using Naive algorithm
#include <stdio.h>
#include <string.h>

void search(char* pattern, char* text)
{
	int N = strlen(text);
    int M = strlen(pattern);

	// A loop to slide pattern[] one by one
	///outer loop
	for (int i = 0; i <= N - M; i++) {
		int j;

		//For current index i, check for pattern match
		///Inner loop
		for (j = 0; j < M; j++)
			if (text[i + j] != pattern[j])
				break;

		if (j == M) // if pattern[0...M-1] = txt[i, i+1, ...i+M-1]
			printf("Pattern found at index %d \n", i);
	}
}

/* Driver program to test above function */
int main()
{
	char text[] = "Bangladesh University of Business and Technology";
	char pattern[] = "Business";
	search(pattern, text);
	return 0;
}

