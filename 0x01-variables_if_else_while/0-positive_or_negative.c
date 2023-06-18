#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Starting point 
 *Return: returns 0 (Success)
 */

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
