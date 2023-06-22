#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @number: the number to be checked
 *
 * Return: returns the absolute value of an integer
 */
int _abs(int number)
{
	if (number >= 0)
		return (number);
	else
		return (-number);
}
