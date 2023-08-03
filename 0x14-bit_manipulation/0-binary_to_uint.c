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
	unsigned int value;

	if (!b)
		return (0);
	for (value = 0; *b != '\0'; b++)
	{
		value = value << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
	}
	return (value);
}
