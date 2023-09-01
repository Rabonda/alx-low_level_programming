#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: returns 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int num = 1;

*c = (char *) &num;
return ((int) *c);
}
