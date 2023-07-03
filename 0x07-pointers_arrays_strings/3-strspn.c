#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the number of bytes in the initial segment
 * @accept: accepted bytes.
 * Return:  the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int row, col;
	bool fall_to_bits;

	for (row = 0; *(s + row) != '\0'; row++)
	{
		fall_to_bits = false;
		for (col = 0; *(accept + col) != '\0'; col++)
		{
			if (*(s + row) == *(accept + col))
			{
				fall_to_bits = true;
				break;
			}
		}
		if (fall_to_bits == true)
			break;
	}
	return (row);
}
