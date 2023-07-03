#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int row, col, fall_to_bits;

	row = 0;
	while (*(s + row) != '\0')
	{
		fall_to_bits = 1;
		col = 0;
		while (*(accept + col) != '\0')
		{
			if (*(s + row) == *(accept + col))
			{
				fall_to_bits = 0;
				break;
			}
			col++;
		}
		if (fall_to_bits == 1)
			break;
		row++;
	}
	return (row);
}

