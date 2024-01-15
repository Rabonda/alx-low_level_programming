#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: appended string
 * @src: The string appended to dest.
 * @n: The number of bytes to be appended to dest.
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destIndex = 0, destLength = 0;

	while (dest[destIndex++])
		destLength += 1;

	destIndex = 0;
	while (src[destIndex] && destIndex < n)
	{
		dest[destLength++] = src[destIndex];
		destIndex += 1;
	}

	return (dest);
}
