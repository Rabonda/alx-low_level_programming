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

	destIndex = 0;
	while (src[destIndex] && destIndex < n){
		dest[destIndex] = src[destIndex];
		destIndex++;
	}

	for (destIndex = srcLength; destIndex < n; destIndex++)
		dest[destIndex] = '\0';

	return (dest);
}
