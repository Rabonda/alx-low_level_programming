#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned int.
 * @b: points to a string.
 * Return: returns the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int i;

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal);
}
