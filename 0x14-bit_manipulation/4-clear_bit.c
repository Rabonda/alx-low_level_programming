#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * clear_bit - a function that sets the value of a bit
 * to 0 at a given index.
 * @index: starting from 0 of the bit.
 * @n: input number.
 * Return: 1 if code successful, or -1 if code is unsuccessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
int sum;

if (index > 63)
return (-1);
else
{
sum = 1 << index;
*n = *n & (~sum);
return (1);
}
}
