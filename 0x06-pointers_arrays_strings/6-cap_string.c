#include "main.h"

/**
 * cap_string -  a function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: capitalizes all words of a string.
 */

char *cap_string(char *str)
{
	int str_index;

	for (str_index = 0; str[str_index]; str_index++)
	{
		while (!(str[str_index] >= 'a' && str[str_index] <= 'z'))
			str_index++;

		index_1 = str_index - 1;
		if (str[index_1] == ' ')
			str[str_index] -= 32;
		else if (str[index_1] == '\t')
			str[str_index] -= 32;
		else if (str[index_1] == '\n')
			str[str_index] -= 32;
		else if (str[index_1] == ',')
			str[str_index] -= 32;
		else if (str[index_1] == ';')
			str[str_index] -= 32;
		else if (str[index_1] == '.')
			str[str_index] -= 32;
		else if (str[index_1] == '!')
			str[str_index] -= 32;
		else if (str[index_1] == '?')
			str[str_index] -= 32;
		else if (str[index_1] == '"')
			str[str_index] -= 32;
		else if (str[index_1] == '(')
			str[str_index] -= 32;
		else if (str[index_1] == ')')
			str[str_index] -= 32;
		else if (str[index_1] == '{')
			str[str_index] -= 32;
		else if (str[index_1] == '}')
			str[str_index] -= 32;
		else if (str_index == 0)
			str[str_index] -= 32;
	}

	return (str);
}
