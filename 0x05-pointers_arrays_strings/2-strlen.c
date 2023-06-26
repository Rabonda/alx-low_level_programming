#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: string - string variable
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int stringLength;

	for (stringLength = 0; *s != '\0'; stringLength++)
	{
		stringLength++;
		s++;
	}

	return (s);
}
