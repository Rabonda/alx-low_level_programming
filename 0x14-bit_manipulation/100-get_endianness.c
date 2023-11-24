#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int little_endian = 1;
	char *big_endian = (char *)&little_endian;

	if (*big_endian)
		return (1);
	else
		return (0);

}




















