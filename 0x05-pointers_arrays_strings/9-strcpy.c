#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * @dest: copy the string to.
 * @src: string to copy.
 *
 * Return:  the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	dest[i] = src[i];

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}

	return (dest);
}
