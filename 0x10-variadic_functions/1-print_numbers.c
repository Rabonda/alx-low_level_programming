#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * followed by a new line.
 * @*separator: string variable to be printed.
 * @n: number of integers.
 * void: prints numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list l;

	va_start(l, n);

	index = 0;
	while (index < n)
	{
		printf("%d", va_arg(valist, int));
		if (index < n - 1 && separator)
			printf("%s", separator);
		index++;
	}
	va_end(l);
	printf("\n");
}
