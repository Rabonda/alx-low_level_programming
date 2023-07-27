#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers
 * followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n:  the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list a_list;

	va_start(a_list, n);

	while (index < n)
	{
		printf("%d", va_arg(a_list, int));
		if (separator && index < n - 1)
			printf("%s", separator);
		index++;
	}
	va_end(a_list);
	printf("\n");
}
