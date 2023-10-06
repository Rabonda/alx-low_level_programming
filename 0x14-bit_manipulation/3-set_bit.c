#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set.
 * @n: number.
 * Return: 1 if code successful, or -1 if code is unsuccesful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
int sum;

if (index > 63)
return (-1);
else
{
sum = 1 << index;
*n = *n | sum;
return (1);
}
}

