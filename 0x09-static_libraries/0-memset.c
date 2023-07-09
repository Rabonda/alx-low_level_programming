#include "main.h"

/**
 * *_memset - funtion that fills memory with a constant byte
 * @s: memory to be filled
 * @b: char to be copied
 * @n: number of times to copyvariable b
 *
 * Return: memory with a constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
