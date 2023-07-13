#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: number of elements in an array.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0)
		return (NULL);
	else if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p != NULL)
		continue;
	else
		return (NULL);

	x = 0;
	while (i < (nmemb * size))
	{
		p[x] = 0;
		x++;
	}

	return (p);
}
