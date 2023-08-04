#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: returns the endianness.
 */
int get_endianness(void)
{
	unsigned int num = 1;

	char *c = (char *) &num;
	return ((int)(char *) &num);
}
