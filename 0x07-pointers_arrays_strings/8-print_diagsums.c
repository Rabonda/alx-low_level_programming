#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int row, firstSum = 0, secondSum = 0;

	for (row = 0; row < (size * size); row++)
	{
		if (row % (size + 1) == 0)
			firstSum += *(a + i);
		if (row % (size - 1) == 0 && row != 0 && row < size * size - 1)
			secondSum += *(a + row);
	}
	printf("%d, %d\n", firstSum, secondSum);
}
