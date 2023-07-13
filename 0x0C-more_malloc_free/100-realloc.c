#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * using malloc and free.
 * @ptr: pointer to be reallocated.
 * @old_size: size of old memory.
 * @new_size: size of new memory.
 * Return: returns the reallocation of a memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr_memory;
	char *copy, *f;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		arr_memory = malloc(new_size);

		if (arr_memory == NULL)
			return (NULL);

		return (arr_memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = ptr;
	arr_memory = malloc(sizeof(*copy) * new_size);

	if (arr_memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = arr_memory;

	x = 0;
	while (x < old_size && x < new_size)
	{
		f[x] = *copy++;
		x++;
	}

	free(ptr);
	return (arr_memory);
}
