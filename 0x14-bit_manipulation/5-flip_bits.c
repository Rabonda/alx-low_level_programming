#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: Number Input 1.
 * @m: Number Input 2.
 * Return: Number of flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int size, flip, index;

	size = sizeof(n) * 8 - 1;

	flip = 0;

	for (index = 0; index <= size; index++)
	{
		if ((n & 1) != (m & 1))
			flip++;
		n = n >> 1;
		m = m >> 1;
	}

	return (flip);
}
