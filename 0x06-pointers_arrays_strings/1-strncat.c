#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int destIndex = 0;
	int destLength = 0;

	while (dest[destIndex++])
		destLength += 1;

	index = 0;
	while (src[destIndex] && destIndex < n)
	{
		dest[destLength++] = src[destIndex];
		destIndex += 1;
	}

	return (dest);
}
