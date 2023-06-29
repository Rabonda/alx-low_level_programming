#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: encoded string
 *
 * Return: returns encodes a string using rot13.
 */

char *rot13(char *str)
{
	int str_index_1 = 0, str_index_2;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	while (str[str_index_1])
	{
		str_index_2 = 0;
		while (str_index_2 < 52)
		{
			if (str[str_index_1] == alphabet[str_index_2])
			{
				str[str_index_1] = rot13key[str_index_2];
				break;
			}
			str_index_2++;
		}

		str_index_1++;
	}

	return (str);
}
