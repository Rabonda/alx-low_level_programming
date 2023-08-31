#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * get_bit - a function that sets the value of a bit 
 * to 1 at a given index.
 * @index: is the index, starting from 0.
 * @n: bit value in the index.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	else if (index == 0)
		return (n & 1);

	return (get_bit(n >> 1, index - 1));
}
