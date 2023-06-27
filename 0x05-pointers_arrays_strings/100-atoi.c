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
	unsigned int number = 0;

	do {
		if (number > 0)
		{
			if (*s >= '0' && *s <= '9')
				number = (number * 10) + (*s - '0');
			else if (*s == '-')
				sign *= -1;
		}
	} while (*s++);

	return (nummber * sign);
}
