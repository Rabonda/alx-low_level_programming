#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int str_index_1 = 0, str_index_2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[str_index_1])
	{
		str_index_2 = 0;
		while (str_index_2 <= 7)
		{
			if (str[str_index_1] == leet[str_index_2] || 
				str[str_index_1] - 32 == leet[str_index_2])
				str[str_index_1] = str_index_2 + '0';
			str_index_2++;
		}
		str_index_1++;
	}
	return (str);
}
