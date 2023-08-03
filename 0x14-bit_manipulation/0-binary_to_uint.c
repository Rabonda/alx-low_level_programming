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
	unsigned int dec, ind;
  dec = 0;
  ind = 0;
	while (b[ind] != '\0')
	{
		if (b[ind] == '1')
			dec = (dec << 1) | 1;
		else if (b[ind] == '0')
			dec <<= 1;
		else if (b[ind] != '0' && b[ind] != '1')
			return (0);
    ind++;
	}
	return (dec);
}
