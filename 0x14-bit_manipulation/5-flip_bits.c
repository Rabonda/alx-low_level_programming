#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: fitst number input.
 * @m: second number input.
 * Return: Number of flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int s, f, i;

	s = sizeof(n) * 8 - 1;

	f = 0;
  i = 0;
	while (i <= s)
	{
		if ((n & 1) != (m & 1))
			f++;
		n = n >> 1;
		m = m >> 1;
    i++;
	}

	return (f);
}
