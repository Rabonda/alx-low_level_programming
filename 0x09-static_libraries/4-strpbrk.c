#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the first occurrence in the string
 * @accept: the bytes in the string
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int row, col;

	row = 0;
	while (*(s + row) != '\0')
	{
		col = 0;
		while (*(accept + col) != '\0')
		{
			if (*(s + row) == *(accept + col))
				return (s + row);
			col++;
		}
		row++;
	}
	return ('\0');
}
