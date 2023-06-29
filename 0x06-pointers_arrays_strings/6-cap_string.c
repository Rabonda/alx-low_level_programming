#include "main.h"

/**
 * cap_string -  a function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: capitalizes all words of a string.
 */

char *cap_string(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		for (index; !(str[index] >= 'a' && str[index] <= 'z'); index++;)

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
