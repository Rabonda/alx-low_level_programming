#include "main.h"

/**
 *_strcat - a function that concatenates two strings.
 *@dest: appended string
 *@src: concatenated string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, destLength = 0;

	while (dest[index++])
		destLength += 1;

	index = 0;
	while (src[index])
	{
		dest[destLength++] = src[index];
		index++;
	}
	return (dest);
}
