#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ')
			str[index] -= 32;
		else if (str[index - 1] == '\t')
			str[index] -= 32;
		else if (str[index - 1] == '\n')
			str[index] -= 32;
		else if (str[index - 1] == ',')
			str[index] -= 32;
		else if (str[index - 1] == ';')
			str[index] -= 32;
		else if (str[index - 1] == '.')
			str[index] -= 32;
		else if (str[index - 1] == '!')
			str[index] -= 32;
		else if (str[index - 1] == '?')
			str[index] -= 32;
		else if (str[index - 1] == '"')
			str[index] -= 32;
		else if (str[index - 1] == '(')
			str[index] -= 32;
		else if (str[index - 1] == ')')
			str[index] -= 32;
		else if (str[index - 1] == '{')
			str[index] -= 32;
		else if (str[index - 1] == '}')
			str[index] -= 32;
		else if (index == 0)
			str[index] -= 32;
	}

	return (str);
}
