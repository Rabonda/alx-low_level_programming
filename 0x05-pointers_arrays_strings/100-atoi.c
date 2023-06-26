#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer
 * @s: The string variable to be converted.
 *
 * Return: the converted string into variable
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int nummber = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (nummber * 10) + (*s - '0');

		else if (nummber > 0)
			break;

	} while (*s++);

	return (nummber * sign);
}
