#include "main.h"

/**
 * print_array -  a function that prints n elements of an array of integers
 * followed by a new line.
 * @a: The array of integers
 * @n: The number of elements to be printed
 * void: prints n elements of an array of integers
 */
void print_array(int *a, int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		printf("%d", a[index]);
		if (index != n - 1)
			printf(", ");
		index++;
	}

	printf("\n");
}
