#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase letters
 * to uppercase.
 * @str: The string to be convertedto uppercase.
 *
 * Return: changes all lowercase letters
 */

char *string_toupper(char *str)
{
	int str_index;

	for (str_index = 0; str[str_index]; str_index++)
		if (str[str_index] >= 'a' && str[str_index] <= 'z')
			str[str_index] -= 32;
	return (str);
}
