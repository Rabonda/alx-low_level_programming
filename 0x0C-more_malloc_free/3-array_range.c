#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers.
 * @min: minimum value variable.
 * @max: maximum value variable.
 *
 * Return: returns an array of integers.
 */
int *array_range(int min, int max)
{
	int *array_of_integers;
	int index;

	if (min > max)
		return (NULL);

	array_of_integers = malloc(sizeof(*array_of_integers) * ((max - min) + 1));

	if (array_of_integers == NULL)
		return (NULL);

	index = 0;
	while (min <= max)
	{
		array_of_integers[index] = min;
		index++;
		min++;
	}
	return (array_of_integers);
}
