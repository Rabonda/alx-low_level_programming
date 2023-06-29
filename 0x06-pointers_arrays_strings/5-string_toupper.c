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
	int str_index;

	for (str_index= 0; str[str_index]; str_index++)
		if (str[str_index] >= 'a' && str[str_index] <= 'z')
			str[str_index] -= 32;

	return (str);
}
