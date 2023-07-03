#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the string
 * @needle:  the first occurrence of the substring
 * Return: pointer to the beginning of located substring
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *haystack_result = haystack, *needle_result = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
		{
			return (haystack_result);
		}
		needle = needle_result;
		haystack_result += 1;
		haystack = haystack_result;
	}
	return (0);
}
