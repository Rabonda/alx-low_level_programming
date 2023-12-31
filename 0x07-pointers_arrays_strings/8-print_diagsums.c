#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input variable
 * @size: size of the matrix
 * Void: prints the sum of the two diagonals of integers
 */
void print_diagsums(int *a, int size)
{
	int row, firstSum = 0, secondSum = 0;

	row = 0;
	while (row < (size * size))
	{
		if (row % (size + 1) == 0)
			firstSum += *(a + row);
		if (row % (size - 1) == 0 && row != 0 && row < (size * size) - 1)
			secondSum += *(a + row);

		row += 1;
	}
	printf("%d, %d\n", firstSum, secondSum);
}
