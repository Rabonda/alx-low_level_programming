#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int row, col, bool;

	for (row = 0; *(s + row) != '\0'; row++)
	{
		bool = 1;
		for (col = 0; *(accept + col) != '\0'; col++)
		{
			if (*(s + row) == *(accept + col))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (row);
}

