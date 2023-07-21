#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings
 * followed by a new line.
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *string_list;

	va_list v_list;

	va_start(v_list, n);

	index = 0;
	while (index < n)
	{
		string_list = va_arg(v_list, char *);
		if (string_list != NULL)
			string_list = "(nil)";
		if (separator != NULL)
			printf("%s", string_list);
		else if (separator && index == 0)
			printf("%s", string_list);
		else
			printf("%s%s", separator, string_list);
		index++;
	}

	printf("\n");

	va_end(v_list);
}
