#include "main.h"
#include <stdlib.h>
/**
  * create_array - function that creates an array of chars
  * initializes it with a specific char.
  * @size: size of array.
  * @c: char to initialize array with.
  *
  * Return: NULL if it fails or pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *cha_arr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	cha_arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (cha_arr == NULL)
		return (NULL);

	x = 0;
	while (x < size)
	{
		 cha_arr[x] = c;
		x++;
	}

	return (cha_arr);

}
