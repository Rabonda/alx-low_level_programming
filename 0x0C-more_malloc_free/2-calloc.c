#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array.
 * @nmemb: number of elements in an array.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	count = 0;
	while (count < (nmemb * size))
	{
		ptr[count] = 0;
		count++;
	}

	return (ptr);
}
