#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: returns the endianness.
 */
int get_endianness(void)
{
	unsigned int x;
	char *c = ((char *) &x)[0];

	return ((int)*c);
}
