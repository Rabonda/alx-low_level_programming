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

	row = 0;
	while (*(s + row) != '\0')
	{
		bool = 1;
		col = 0;
		while (*(accept + col) != '\0')
		{
			if (*(s + row) == *(accept + col))
			{
				bool = 0;
				break;
			}
			col++;
		}
		if (bool == 1)
			break;
		row++;
	}
	return (row);
}

