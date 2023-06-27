#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer
 * @s: The string variable to be converted.
 *
 * Return: the converted string into variable
 */
int _atoi(char *s)
{
	int positveNegativeSign = 1;
	unsigned int number = 0;

	do {
		if (*s >= '0' && *s < '10')
			number = (number * 10) + (*s - '0');
		else if (*s == '-')
			positveNegativeSign *= -1;
		else if (number > 0)
			break;
	} while (*s++);

	return (number * positveNegativeSign);
}
