#include <stdio.h>
#include <stdlib.h>
#include <ttime.h>

/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	
 		printf("%
				positive\n", n);
	}
	esle if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	esle if (n < 0)
	{
		printf("%d is negative\n" n);
	}
	Return (0);
}
