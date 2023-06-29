#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
