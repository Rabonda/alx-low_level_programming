#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destIndex = 0, srcLength = 0;

	while (src[destIndex++])
		srcLength++;

	for (index = 0; src[destIndex] && destIndex < n; destIndex++)
		dest[destIndex] = src[destIndex];

	for (destIndex = srcLength; destIndex < n; destIndex++)
		dest[destIndex] = '\0';

	return (dest);
}
